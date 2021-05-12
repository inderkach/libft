/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <fdanny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:51:47 by fdanny            #+#    #+#             */
/*   Updated: 2021/05/12 21:08:59 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_tonewword(char *ptrstr, char c)
{
	while (*ptrstr == c)
		ptrstr++;
	while (*ptrstr != c && *ptrstr != '\0')
		ptrstr++;
	while (*ptrstr == c)
		ptrstr++;
	return (ptrstr);
}

int	ft_nwords(const char *s, char c)
{
	int		n;
	char	*ptrs;
	char	isprevc;

	ptrs = (char *)s;
	n = 0;
	if (*ptrs != c)
		n++;
	isprevc = 0;
	while (*ptrs != '\0')
	{
		if (*ptrs == c)
			isprevc = 1;
		else if (isprevc && (*ptrs != c))
		{
			n++;
			isprevc = 0;
		}
		ptrs++;
	}
	return (n);
}

size_t	ft_wordlength(char const *s, char c)
{
	size_t	l;
	char	*ptrs;

	ptrs = (char *)s;
	l = 0;
	while (*ptrs == c)
		ptrs++;
	while (*ptrs != c && *ptrs != '\0')
	{
		l++;
		ptrs++;
	}
	return (l);
}

char	*ft_createstr(char const *s, char c)
{
	char	*word;
	char	*pstr;
	size_t	i;

	pstr = (char *)s;
	while (*pstr == c)
		pstr++;
	word = (char *)malloc(sizeof(char) * ft_wordlength(s, c) + 1);
	i = 0;
	while (i < ft_wordlength(s, c) && *(word + i) != c)
	{
		*(word + i) = *(pstr + i);
		i++;
	}
	*(word + i) = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		nword;
	int		nwords;
	char	*ptrstr;

	if (s == NULL)
		return (NULL);
	nwords = ft_nwords(s, c);
	out = ft_calloc((nwords + 1), sizeof(char *));
	if (out == NULL)
		return (NULL);
	*(out + nwords) = NULL;
	nword = 0;
	ptrstr = (char *)s;
	while (nword < nwords)
	{
		*(out + nword) = ft_createstr(ptrstr, c);
		nword++;
		ptrstr = ft_tonewword(ptrstr, c);
	}
	return (out);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <fdanny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:51:47 by fdanny            #+#    #+#             */
/*   Updated: 2021/05/13 14:41:45 by fdanny           ###   ########.fr       */
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
	word = (char *)ft_calloc(ft_wordlength(s, c) + 1, sizeof(char));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < ft_wordlength(s, c) && *(word + i) != c)
	{
		*(word + i) = *(pstr + i);
		i++;
	}
	*(word + i) = '\0';
	return (word);
}

char	ft_check_null(char **res, int a, char c)
{
	if ((*res + a) == NULL)
	{
		while (a <= 0)
		{
			ft_bzero((*res + a), ft_wordlength((*res + a), c));
			free(*res + a);
			a--;
		}
		free(res);
		return (1);
	}
	return (0);
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
		if (ft_check_null(out, nword, c))
			return (NULL);
		nword++;
		ptrstr = ft_tonewword(ptrstr, c);
	}
	return (out);
}

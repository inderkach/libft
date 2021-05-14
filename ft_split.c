/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <fdanny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:51:47 by fdanny            #+#    #+#             */
/*   Updated: 2021/05/14 19:39:12 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nwords(const char *s, char c)
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
	return (l + 1);
}

char	ft_check_null(char **res, int a)
{
	if ((*res + a) == NULL)
	{
		while (a >= 0)
		{
			free(*res + a);
			a--;
		}
		free(res);
		return (1);
	}
	return (0);
}

static char	**ft_createwords(char const *s, char **out, int nwords, char c)
{
	char	*ps;
	int		nword;

	nword = 0;
	while (nword < nwords)
	{
		while (*(s) == c)
			s++;
		ps = ft_strchr(s, c);
		if (ps == NULL)
			ps = ft_strchr(s, '\0');
		*(out + nword) = ft_calloc(ft_wordlength(s, c) + 1, sizeof(char));
		if (ft_check_null(out, nword))
			return (NULL);
		ft_strlcpy(*(out + nword), (char *)s, ft_wordlength(s, c));
		s = ps;
		nword++;
	}
	*(out + nword) = NULL;
	return (out);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		nwords;

	if (s == NULL)
		return (NULL);
	nwords = ft_nwords(s, c);
	out = ft_calloc((nwords + 1), sizeof(char *));
	if (out == NULL)
		return (NULL);
	return (ft_createwords((char *)s, out, nwords, c));
}

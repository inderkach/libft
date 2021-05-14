/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <fdanny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:51:47 by fdanny            #+#    #+#             */
/*   Updated: 2021/05/14 19:26:11 by fdanny           ###   ########.fr       */
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

static void	ft_createwords(char const *s, char **out, int nwords, char c)
{
	size_t	size_str;
	char	*ps;

	while (nwords--)
	{
		while (*(s) == c)
			s++;
		ps = ft_strchr(s, c);
		if (ps == NULL)
			ps = ft_strchr(s, '\0');
		size_str = (size_t)(ps - s);
		*out = ft_calloc(ft_wordlength(s, c) + 1, sizeof(char));
		// if (*out== NULL)
		// 	return ;
		ft_strlcpy(*out, (char *)s, ft_wordlength(s, c));
		//printf("%d\n", ft_wordlength(s, c));
		s = ps;
		out++;
	}
	*out = NULL;
}

// char	ft_check_null(char **res, int a, char c)
// {
// 	if ((*res + a) == NULL)
// 	{
// 		while (a <= 0)
// 		{
// 			ft_bzero((*res + a), ft_wordlength((*res + a), c));
// 			free(*res + a);
// 			a--;
// 		}
// 		free(res);
// 		return (1);
// 	}
// 	return (0);
// }

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
	ft_createwords((char *)s, out, nwords, c);
	return (out);
}

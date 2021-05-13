/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <fdanny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:05:36 by fdanny            #+#    #+#             */
/*   Updated: 2021/05/13 13:47:47 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isneedle(const char *hs, const char *nd)
{
	size_t	i;

	i = 0;
	while (*(hs + i) == *(nd + i) || *(nd + i) == '\0' || hs == 0)
	{
		if (*(nd + i) == '\0')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	p;
	char	*error;

	if (haystack == NULL)
	{
		error = (char *)0;
		*error = 1;
	}
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	else if (ft_strlen(needle) > len)
		return (NULL);
	p = 0;
	while (p <= len - ft_strlen(needle))
	{
		if (ft_isneedle((haystack + p), needle))
			return ((char *)(haystack + p));
		p++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:05:12 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/19 16:05:16 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*i;
	char	cc;

	cc = (char)c;
	i = (char *)s + ft_strlen(s);
	while (i != s)
	{
		if (*i == cc)
			return (i);
		i--;
	}
	if (*i == c)
		return (i);
	return (NULL);
}

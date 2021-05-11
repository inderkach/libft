/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 13:18:05 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/28 19:26:55 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	out;

	i = 0;
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	else
		out = (ft_strlen(src) + ft_strlen(dst));
	dstsize -= ft_strlen(dst);
	dst +=ft_strlen(dst);
	while (src[i] != '\0' && (dstsize - 1) > 0)
	{
		*(dst + i) = src[i];
		i++;
		dstsize--;
	}
	*(dst + i) = '\0';
	return (out);
}

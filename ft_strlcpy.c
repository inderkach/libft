/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 13:17:41 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/24 18:12:26 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	length;
	size_t	p;

	if (!dst || !src)
		return (0);
	length = ft_strlen(src);
	if (dstsize == 0)
		return (length);
	p = 0;
	while (p < dstsize && *(src + p) != '\0')
	{
		*(dst + p) = *(src + p);
		p++;
	}
	if (dstsize < length)
		*(dst + dstsize - 1) = '\0';
	else
		*(dst + p) = '\0';
	return (length);
}

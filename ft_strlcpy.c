/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <fdanny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 13:17:41 by fdanny            #+#    #+#             */
/*   Updated: 2021/05/14 19:05:36 by fdanny           ###   ########.fr       */
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
	while (p < dstsize - 1 && src[p] != '\0')
	{
		dst[p] = src[p];
		p++;
	}
	dst[p] = '\0';
	return (length);
}

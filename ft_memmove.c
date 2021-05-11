/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 17:54:09 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/24 17:54:25 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;

	if (dst == src)
		return (dst);
	s = (char *)src;
	d = (char *)dst;
	if (s > d)
	{
		while (n-- != 0)
		{
			*(d++) = *(s++);
		}
	}
	else
	{
		while (n-- != 0)
		{
			*(d + n) = *(s + n);
		}
	}
	return (dst);
}

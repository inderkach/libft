/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 18:04:14 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/28 19:38:21 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;
	char	cchar;

	ptr = (char *)s;
	cchar = (char)c;
	while (n)
	{
		if (*ptr == cchar)
			return (ptr);
		ptr++;
		n--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:47:24 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/24 16:20:35 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	ptr;

	if ((unsigned long)ft_strlen(s) < (unsigned long)(start + len))
		return (NULL);
	sub = (char *)malloc(len + 1);
	if (sub == 0)
		return (NULL);
	ptr = 0;
	while (ptr < len)
	{
		*(sub + ptr) = *(s + start + ptr);
		ptr++;
	}
	*(sub + len) = '\0';
	return (sub);
}

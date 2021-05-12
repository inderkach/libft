/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <fdanny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:47:24 by fdanny            #+#    #+#             */
/*   Updated: 2021/05/12 19:49:58 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	ptr;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
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

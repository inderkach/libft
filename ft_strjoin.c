/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:49:12 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/24 18:09:06 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	ptr;

	ptr = 0;
	joined = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (joined == 0)
		return (NULL);
	while (ptr < ft_strlen(s1))
	{
		*(joined + ptr) = *(s1 + ptr);
		ptr++;
	}
	ptr = 0;
	while (ptr < ft_strlen(s2))
	{
		*(joined + ft_strlen(s1) + ptr) = *(s2 + ptr);
		ptr++;
	}
	*(joined + ft_strlen(s1) + ft_strlen(s2)) = '\0';
	return (joined);
}

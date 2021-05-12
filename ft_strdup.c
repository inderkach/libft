/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <fdanny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:46:54 by fdanny            #+#    #+#             */
/*   Updated: 2021/05/12 19:50:56 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sdup;
	size_t	i;

	i = ft_strlen(s);
	sdup = (char *)malloc(i + 1);
	if (sdup == NULL)
		return (NULL);
	*(sdup + i + 1) = '\0';
	if (sdup == 0)
		return (NULL);
	while (i != 0)
	{
		sdup[i] = s[i];
		i--;
	}
	*sdup = *s;
	return (sdup);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <fdanny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:46:54 by fdanny            #+#    #+#             */
/*   Updated: 2021/05/14 16:18:41 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sdup;
	size_t	size;
	size_t	i;

	size = ft_strlen(s) + 1;
	sdup = (char *)ft_calloc((size), sizeof(char));
	if (sdup == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		sdup[i] = s[i];
		i++;
	}
	return (sdup);
}

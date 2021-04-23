/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:46:54 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/20 12:46:58 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	char *sdup;
	size_t i;

	i = ft_strlen(s);
	sdup = (char*)malloc(i);
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

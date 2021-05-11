/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:53:46 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/28 19:27:28 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*fs;

	fs = ft_strdup(s);
	i = 0;
	while (i < ft_strlen(s))
	{
		fs[i] = (*f)(i, fs[i]);
		i++;
	}
	return (fs);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <fdanny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:53:46 by fdanny            #+#    #+#             */
/*   Updated: 2021/05/12 19:26:50 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*fs;

	if (s == NULL)
		return (NULL);
	fs = ft_strdup(s);
	i = 0;
	while (i < ft_strlen(s))
	{
		fs[i] = (*f)(i, fs[i]);
		i++;
	}
	return (fs);
}

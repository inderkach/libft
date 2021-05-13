/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nwords.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <fdanny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 14:37:36 by fdanny            #+#    #+#             */
/*   Updated: 2021/05/13 14:44:04 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nwords(const char *s, char c)
{
	int		n;
	char	*ptrs;
	char	isprevc;

	ptrs = (char *)s;
	n = 0;
	if (*ptrs != c)
		n++;
	isprevc = 0;
	while (*ptrs != '\0')
	{
		if (*ptrs == c)
			isprevc = 1;
		else if (isprevc && (*ptrs != c))
		{
			n++;
			isprevc = 0;
		}
		ptrs++;
	}
	return (n);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:06:17 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/19 16:06:19 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t			p;
	int				sign;
	unsigned long	result;

	sign = 1;
	p = 0;
	result = 0;
	while (str[p] == ' ' || str[p] == '\t' || str[p] == '\n'
		|| str[p] == '\v' || str[p] == '\f' || str[p] == '\r')
		p++;
	if (str[p] == '-')
		sign = -1;
	if (str[p] == '-' || str[p] == '+')
		p++;
	else if (str[p] == '+')
		p++;
	while (ft_isdigit(str[p]))
	{
		result += str[p] - '0';
		if (ft_isdigit(str[p + 1]))
			result *= 10;
		p++;
	}
	sign *= result;
	return (sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <fdanny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:06:17 by fdanny            #+#    #+#             */
/*   Updated: 2021/05/11 21:31:22 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_spcrm(const char *str)
{
	size_t	p;

	p = 0;
	while (str[p] == ' ' || str[p] == '\t' || str[p] == '\n'
		|| str[p] == '\v' || str[p] == '\f' || str[p] == '\r')
		p++;
	return (p);
}

int	ft_check_edge(int edge, int sign, unsigned long result)
{
	if (edge != 0)
		sign *= result;
	else
	{
		if (sign == 1)
			sign = -1;
		else
			sign = 0;
	}
		return (sign);
}

int	ft_atoi(const char *str)
{
	size_t			p;
	int				sign;
	unsigned long	result;
	int				edge;

	sign = 1;
	edge = 20;
	p = ft_spcrm(str);
	result = 0;
	if (str[p] == '-')
		sign = -1;
	if (str[p] == '-' || str[p] == '+')
		p++;
	else if (str[p] == '+')
		p++;
	while (ft_isdigit(str[p]) && edge != 0)
	{
		result += str[p] - '0';
		if (ft_isdigit(str[p + 1]))
			result *= 10;
		edge--;
		p++;
	}
	return (ft_check_edge(edge, sign, result));
}

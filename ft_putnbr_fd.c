/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:00:26 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/24 17:56:14 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		rzrd;
	char	out;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n == 0)
		write(fd, "0", 1);
	else
	{
		if (n < 0)
		{
			n *= -1;
			write(fd, "-", 1);
		}
		rzrd = 1000000000;
		while (n / rzrd == 0)
			rzrd /= 10;
		while (rzrd > 0)
		{
			out = n / rzrd + '0';
			write(fd, &out, 1);
			n %= rzrd;
			rzrd /= 10;
		}
	}
}

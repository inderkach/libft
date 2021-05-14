/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <fdanny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:52:47 by fdanny            #+#    #+#             */
/*   Updated: 2021/05/14 16:26:18 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numsize(int n)
{
	int	s;

	s = 1;
	if (n == 0)
		return (s);
	if (n > 0)
		s--;
	while (n != 0)
	{
		n /= 10;
		s++;
	}
	return (s);
}

static void	ft_putnbr_str(char *s, int n)
{
	char	*ptr;
	int		rzrd;
	char	out;

	ptr = s;
	if (n < 0)
	{
		n *= -1;
		*ptr = '-';
		ptr++;
	}
	rzrd = 1000000000;
	while (n / rzrd == 0)
		rzrd /= 10;
	while (rzrd > 0)
	{
		out = n / rzrd + '0';
		*ptr = out;
		ptr++;
		n %= rzrd;
		rzrd /= 10;
	}
	*ptr = '\0';
}

char	*ft_itoa(int n)
{
	char	*array;

	array = (char *)malloc((ft_numsize(n) + 1) * sizeof(char));
	if (array == 0)
		return (NULL);
	if (n == -2147483648)
		array = ft_strdup("-2147483648");
	else if (n == 0)
		array = ft_strdup("0");
	else
		ft_putnbr_str(array, n);
	return (array);
}

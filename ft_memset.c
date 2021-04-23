/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:28:24 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/16 16:58:08 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void *ft_memset(void *b, int c, size_t len)
{
	char *a;
//	write(1, "1", 1);
	a = b;
	while (len-- > 0)
	{
	//	write(1, "2", 1);
		*(a + len)  = c;
	}
	return (b);
}

int main()
{
	char str[] = "Eeeeeeejdsljafja;f  dfwsf wda";
		ft_memset(str, '1', 100);
	printf("%s", str);
	return 0;
}

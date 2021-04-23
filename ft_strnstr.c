/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:05:36 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/19 16:05:39 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{

}*/

int main()
{
	char a[30] = "abba baabab aashd ddjafauj";
	char b[5] = "baab";
	char ptr[30];
	char *pp = ptr;
	pp = strnstr(a, b, 20);
	printf("%s\n", ptr);
	return (0);
}
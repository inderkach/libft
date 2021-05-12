/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <fdanny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:50:32 by fdanny            #+#    #+#             */
/*   Updated: 2021/05/12 19:49:40 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isinset(const char a, const char *set)
{
	char	*ptr;

	ptr = (char *)set;
	while (*ptr != '\0')
	{
		if (a == *ptr)
			return (1);
		ptr++;
	}
	return (0);
}

size_t	ft_lengthofres(char const *s, char const *set)
{
	char	*ptr;
	size_t	res;

	res = ft_strlen(s);
	ptr = (char *)s;
	while (*ptr != '\0' && ft_isinset(*ptr, set))
	{
		res--;
		ptr++;
	}
	if (*ptr == '\0')
		return (0);
	ptr = (char *)s + ft_strlen(s) - 1;
	while (ptr >= s && ft_isinset(*ptr, set))
	{
		res--;
		ptr--;
	}
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	ps1;
	size_t	pres;

	if (s1 == NULL)
		return (NULL);
	result = (char *)malloc(sizeof(char) * ft_lengthofres(s1, set) + 1);
	if (result == 0)
		return (NULL);
	ps1 = 0;
	pres = 0;
	while (*(s1 + ps1) != '\0' && ft_isinset(*(s1 + ps1), set))
	{
		ps1++;
	}
	while (pres < ft_lengthofres(s1, set))
	{
		*(result + pres) = *(s1 + ps1 + pres);
		pres++;
	}
	*(result + pres) = '\0';
	return (result);
}

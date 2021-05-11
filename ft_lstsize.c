/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 17:23:44 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/28 19:18:38 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*runner;
	int		size;

	runner = lst;
	size = 0;
	while (runner != 0)
	{
		runner = runner->next;
		size++;
	}
	return (size);
}

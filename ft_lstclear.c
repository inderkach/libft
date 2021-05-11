/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 19:00:05 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/28 19:36:06 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*nx;

	p = *lst;
	while (p != 0)
	{
		nx = p->next;
		ft_lstdelone(p, del);
		p = nx;
	}
	*lst = NULL;
}

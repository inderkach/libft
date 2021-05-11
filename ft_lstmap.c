/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 19:04:49 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/28 19:37:01 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*iternew;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (new == 0)
		return (0);
	iternew = new->next;
	lst = lst->next;
	while (lst != 0)
	{
		iternew = ft_lstnew(f(lst->content));
		if (iternew == 0)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		lst = lst->next;
		iternew = iternew->next;
	}
	iternew = NULL;
	return (new);
}

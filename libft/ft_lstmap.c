/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 08:41:13 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/01 08:41:15 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*c;
	t_list	*start;

	start = ft_lstnew(f(lst->content));
	if (!(start))
		ft_lstdelone(lst, del);
	else
	{
		lst = lst->next;
		c = start;
	}
	while (lst)
	{
		c->next = ft_lstnew(f(lst->content));
		if (!(c->next))
			ft_lstdelone(lst, del);
		lst = lst->next;
		c = c->next;
	}
	return (start);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:56:09 by ahel-mou          #+#    #+#             */
/*   Updated: 2021/12/23 11:12:37 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mand_lib.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!(*lst))
		*lst = new;
	else
	{
		node = *lst;
		*lst = new;
		(*lst)->next = node;
	}
}

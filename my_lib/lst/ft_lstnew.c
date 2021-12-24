/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:39:50 by ahel-mou          #+#    #+#             */
/*   Updated: 2021/12/23 11:09:05 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mand_lib.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ele;

	ele = malloc(sizeof(t_list));
	if (!ele)
		return (NULL);
	ele->content = content;
	ele->next = NULL;
	return (ele);
}

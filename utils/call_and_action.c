/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_action.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:09:23 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/02 17:31:15 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_type_1(t_stack **a, t_stack **b, int type)
{
	if (type == sa)
		ft_swap_top(a);
	else if (type == sb)
		ft_swap_top(b);
	else if (type == ss)
	{
		ft_swap_top(a);
		ft_swap_top(b);
	}
	else if (type == pa)
		ft_push_to(b, a);
	else if (type == pb)
		ft_push_to(a, b);
	else if (type == ra)
		ft_rotate(a);
}

void	check_type_2(t_stack **a, t_stack **b, int type)
{
	if (type == rb)
		ft_rotate(b);
	else if (type == rr)
	{
		ft_rotate(a);
		ft_rotate(b);
	}
	else if (type == rra)
		ft_reverse_rotate(a);
	else if (type == rrb)
		ft_reverse_rotate(b);
	else if (type == rrr)
	{
		ft_reverse_rotate(a);
		ft_reverse_rotate(b);
	}
}

void	call_action(t_stack **a, t_stack **b, int action_type)
{
	check_type_1(a, b, action_type);
	check_type_2(a, b, action_type);
	ft_putendl_fd(g_ops[action_type], 1);
}

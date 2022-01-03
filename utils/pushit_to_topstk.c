/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushit_to_topstk.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:08:45 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/03 17:21:48 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	make_it_topof_b(t_stack **a, t_stack **b, int index, int value)
{
	while (ft_rt_last_item(*b) != value)
		if (index >= ft_stack_size(*b) / 2)
			call_action(a, b, rb);
	else
		call_action(a, b, rrb);
}

void	make_it_topof_a(t_stack **a, t_stack **b, int index, int value)
{
	while (ft_rt_last_item(*a) != value)
		if (index >= ft_stack_size(*a) / 2)
			call_action(a, b, ra);
	else
		call_action(a, b, rra);
}

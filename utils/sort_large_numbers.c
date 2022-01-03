/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:09:28 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/03 17:11:53 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_handlemoreitems(t_stack **a, t_stack **b)
{
	while (ft_stack_size(*a) != 2)
	{
		if (ft_rt_last_item(*a) != (*a)->max && ft_rt_last_item(*a) != (*a)->min)
		{
			call_action(a, b, pb);
			if (ft_rt_last_item(*b) > (*a)->mid && ft_stack_size(*b) > 1)
				call_action(a, b, rb);
		}
		else
			call_action(a, b, ra);
	}
	if (ft_rt_last_item(*a) != (*a)->max)
		call_action(a, b, sa);
	call_action(a, b, pa);
	while (ft_stack_size(*b))
	{
		make_it_topof_b(a, b, ft_selectoptimalitem(a, b),
			(*b)->items[ft_selectoptimalitem(a, b)]);
		make_it_topof_a(a, b, ft_findtopitem(*a, ft_rt_last_item(*b)),
			(*a)->items[ft_findtopitem(*a, ft_rt_last_item(*b))]);
		call_action(a, b, pa);
	}
	make_it_topof_a(a, b, find_num_instack(*a, ft_smallest_in_stack(*a)),
		ft_smallest_in_stack(*a));
}

static void	ft_checklastandfirst(t_stack **a, t_stack **b, int *ret, int *diff)
{
	if (*diff == ft_stack_size(*a) + ft_stack_size(*b) + 1)
	{
		*diff = ft_findoptimalitem(a, b, (*a)->items[0],
				(*a)->items[(*a)->top]);
		*ret = (*a)->selected;
	}
	else
	{
		if (*diff > ft_findoptimalitem(a, b, (*a)->items[0],
				(*a)->items[(*a)->top]))
		{
			*diff = ft_findoptimalitem(a, b, (*a)->items[0],
					(*a)->items[(*a)->top]);
			*ret = (*a)->selected;
		}
	}
}

int	ft_selectoptimalitem(t_stack **a, t_stack **b)
{
	int	ret;
	int	diff;
	int	top;

	top = (*a)->top;
	ret = -1;
	diff = ft_stack_size(*a) + ft_stack_size(*b) + 1;
	while (top)
	{
		if (diff != ft_stack_size(*a) + ft_stack_size(*b) + 1
			&& diff < ft_findoptimalitem(a, b, (*a)->items[top],
				(*a)->items[top - 1]))
		{
			top--;
			continue ;
		}
		diff = ft_findoptimalitem(a, b, (*a)->items[top], (*a)->items[top - 1]);
		ret = (*a)->selected;
		top--;
	}
	ft_checklastandfirst(a, b, &ret, &diff);
	return (ret);
}

int	ft_countsteps(t_stack **a, t_stack **b, int index, int value)
{
	int	steps;

	steps = 0;
	if (index >= ft_stack_size(*b) / 2)
		steps += ft_stack_size(*b) - index - 1;
	else
		steps += index + 1;
	if (ft_findtopitem(*a, value) != -1)
	{
		if (ft_findtopitem(*a, value) >= ft_stack_size(*a) / 2)
			steps += ft_stack_size(*a) - ft_findtopitem(*a, value) - 1;
		else
			steps += ft_findtopitem(*a, value) + 1;
	}
	return (steps);
}

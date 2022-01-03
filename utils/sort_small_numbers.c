/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:09:37 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/03 17:10:34 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_2_nums(t_stack **a, t_stack **b)
{
	if (!(ft_is_sorted(*a)))
		call_action(a, b, sa);
}

void	sort_3_nums(t_stack **a, t_stack **b)
{
	int	top;
	int	mid;
	int	bot;

	top = (*a)->items[2];
	mid = (*a)->items[1];
	bot = (*a)->items[0];
	if (top > mid && mid < bot && bot > top)
		call_action(a, b, sa);
	else if (top > mid && mid > bot && bot < top)
	{
		call_action(a, b, sa);
		call_action(a, b, rra);
	}
	else if (top > mid && mid < bot && bot < top)
		call_action(a, b, ra);
	else if (top < mid && mid > bot && bot > top)
	{
		call_action(a, b, sa);
		call_action(a, b, ra);
	}
	else if (top < mid && mid > bot && bot < top)
		call_action(a, b, rra);
}

void	ft_sort_small_nums(t_stack **a, t_stack **b)
{
	if (ft_stack_size(*a) == 2)
	{
		sort_2_nums(a, b);
		return ;
	}
	while (ft_stack_size(*a) != 3)
		call_action(a, b, pb);
	if (ft_stack_size(*a) == 3)
	{
		sort_3_nums(a, b);
		while (ft_stack_size(*b))
		{
			make_it_topof_a(a, b, ft_findtopitem(*a, ft_rt_last_item(*b)), (*a)->items[ft_findtopitem(*a, ft_rt_last_item(*b))]);
			call_action(a, b, pa);
		}
		make_it_topof_a(a, b, find_num_instack(*a, ft_smallest_in_stack(*a)), ft_smallest_in_stack(*a));
	}
}

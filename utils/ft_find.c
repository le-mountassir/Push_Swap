/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:09:46 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/03 13:07:32 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"



int	ft_findoptimalitem(t_stack **a, t_stack **b, int min, int max)
{
	int	i;
	int	diff;

	i = (*b)->top;
	diff = ft_stack_size(*a) + ft_stack_size(*b) + 1;
	while (i >= 0)
	{
		if ((*b)->items[i] > min && (*b)->items[i] < max)
		{
			if (diff != ft_stack_size(*a) + ft_stack_size(*b) + 1
				&& diff < ft_countsteps(a, b, i, (*b)->items[i]))
			{
				i--;
				continue ;
			}
			(*a)->selected = i;
			diff = ft_countsteps(a, b, i, (*b)->items[i]);
		}
		i--;
	}
	return (diff);
}

int	ft_findtopitem(t_stack *stk, int item)
{
	int	i;
	int	ret;
	int	diff;

	i = stk->top;
	ret = find_num_instack(stk, ft_smallest_in_stack(stk));
	diff = 0;
	while (i >= 0)
	{
		if (stk->items[i] < item || (diff
				&& diff < ft_abs(stk->items[i] - item)))
		{
			i--;
			continue ;
		}
		ret = i;
		diff = ft_abs(stk->items[i] - item);
		i--;
	}
	return (ret);
}

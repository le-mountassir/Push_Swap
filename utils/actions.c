/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 12:11:11 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/02 17:32:33 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_to(t_stack **a, t_stack **b)
{
	if (*a && *b)
	{
		if ((*a)->items)
		{
			ft_addto_top(b, ft_rt_last_item(*a));
			ft_stack_pop(a);
		}
	}
}

void	ft_swap_top(t_stack **stk)
{
	int	temp;

	if (*stk)
	{
		if ((*stk)->items)
		{
			if (ft_stack_size(*stk) > 1)
			{
				temp = (*stk)->items[(*stk)->top];
				(*stk)->items[(*stk)->top] = (*stk)->items[(*stk)->top - 1];
				(*stk)->items[(*stk)->top - 1] = temp;
			}
		}
	}
}

void	ft_rotate(t_stack **stk)
{
	int	i;
	int	temp;

	if (*stk)
	{
		if ((*stk)->items)
		{
			i = ft_stack_size(*stk) - 1;
			temp = (*stk)->items[(*stk)->top];
			while (i > 0)
			{
				(*stk)->items[i] = (*stk)->items[i - 1];
				i--;
			}
			(*stk)->items[i] = temp;
		}
	}
}

void	ft_reverse_rotate(t_stack **stk)
{
	int	i;
	int	temp;

	if (*stk)
	{
		if ((*stk)->items)
		{
			i = 0;
			temp = (*stk)->items[0];
			while (i < ft_stack_size(*stk) - 1)
			{
				(*stk)->items[i] = (*stk)->items[i + 1];
				i++;
			}
			(*stk)->items[i] = temp;
		}
	}
}
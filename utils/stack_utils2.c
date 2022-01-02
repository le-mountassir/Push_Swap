/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 13:39:17 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/02 17:16:14 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_rt_last_item(t_stack *stk)
{
	return (stk->items[ft_stack_size(stk) - 1]);
}

void	ft_addto_top(t_stack **stk, int num)
{
	int	i;
	int	*nums;

	if (*stk)
	{
		if (!(*stk)->items)
		{
			(*stk)->items = malloc(sizeof(int));
			(*stk)->items[0] = num;
		}
		else
		{
			nums = malloc(sizeof(int) * (ft_stack_size(*stk) + 1));
			i = 0;
			while (i < ft_stack_size(*stk))
			{
				nums[i] = (*stk)->items[i];
				i++;
			}
			nums[i] = num;
			free((*stk)->items);
			(*stk)->items = nums;
		}
		(*stk)->top++;
	}
}


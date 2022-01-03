/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 10:59:18 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/02 17:07:23 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_init_stack(void)
{
	t_stack	*stk;

	stk = malloc(sizeof(t_stack));
	stk->items = NULL;
	stk->top = -1;
	return (stk);
}

int	ft_stack_size(t_stack *stk)
{
	return (stk->top + 1);
}

void	ft_stack_pop(t_stack **stk)
{
	int	i;
	int	*nums;

	if (*stk)
	{
		if ((*stk)->items)
		{
			nums = malloc(sizeof(int) * (ft_stack_size(*stk) - 1));
			if (ft_stack_size(*stk) - 1 == 0)
				nums = NULL;
			i = 0;
			while (i < ft_stack_size(*stk) - 1)
			{
				nums[i] = (*stk)->items[i];
				i++;
			}
			free((*stk)->items);
			(*stk)->items = nums;
			(*stk)->top--;
		}
	}
}

int	ft_is_sorted(t_stack *stk)
{
	int	i;

	i = 1;
	while (i < ft_stack_size(stk))
	{
		if (stk->items[i] > stk->items[i - 1])
			return (0);
		i++;
	}
	return (1);
}
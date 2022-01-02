/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min_mid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:15:47 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/02 17:19:34 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_smallest_in_stack(t_stack *stk)
{
	int	i;
	int	smallest;

	smallest = -1;
	if (stk->items)
	{
		smallest = stk->items[0];
		i = 1;
		while (i < ft_stack_size(stk))
		{
			if (smallest > stk->items[i])
				smallest = stk->items[i];
			i++;
		}
	}
	return (smallest);
}

int	ft_largest_in_stack(t_stack *stk)
{
	int	i;
	int	bigest;

	bigest = -1;
	if (stk->items)
	{
		bigest = stk->items[0];
		i = 1;
		while (i < ft_stack_size(stk))
		{
			if (bigest < stk->items[i])
				bigest = stk->items[i];
			i++;
		}
	}
	return (bigest);
}

int	ft_middle_in_stack(t_stack *stk)
{
	int	*arr;
	int	i;
	int	ret;

	arr = malloc(sizeof(int) * ft_stack_size(stk));
	i = 0;
	while (i < ft_stack_size(stk))
	{
		arr[i] = stk->items[i];
		i++;
	}
	ft_quicksort(arr, 0, ft_stack_size(stk) - 1);
	ret = arr[ft_stack_size(stk) / 2];
	free(arr);
	return (ret);
}

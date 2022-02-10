/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 08:35:18 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/06 08:35:18 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	small_sort_a(t_holder *stks, int size)
{
	if (size == 2 || size == 3)
	{
		if (stks->a[stks->a_top] > stks->a[stks->a_top - 1])
			sa(stks, 1);
		if (size == 3)
		{
			if (stks->a[stks->a_top - 1] > stks->a[stks->a_top - 2])
			{
				ra(stks, 1);
				sa(stks, 1);
				rra(stks, 1);
				if (stks->a[stks->a_top] > stks->a[stks->a_top - 1])
					sa(stks, 1);
			}
		}
	}
	if (size == 4)
		sort_a_4_args(stks);
}

void	small_sort_b(t_holder *stks, int size)
{
	if (size >= 1 && size <= 3)
		pa(stks);
	if (size == 2 || size == 3)
	{
		pa(stks);
		if (stks->a[stks->a_top] > stks->a[stks->a_top - 1])
			sa(stks, 1);
		if (size == 3)
		{
			pa(stks);
			if (stks->a[stks->a_top] > stks->a[stks->a_top - 1])
				sa(stks, 1);
			if (stks->a[stks->a_top - 1] > stks->a[stks->a_top - 2])
			{
				ra(stks, 1);
				sa(stks, 1);
				rra(stks, 1);
				if (stks->a[stks->a_top] > stks->a[stks->a_top - 1])
					sa(stks, 1);
			}
		}
	}
}

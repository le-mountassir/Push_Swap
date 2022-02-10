/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 08:36:54 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/06 08:36:54 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	p_big_nums_to_a(t_holder *stks, t_cnt_acts *cnt,
		t_centers points, int size)
{
	int	idx;

	idx = 0;
	while (idx < size)
	{
		if (stks->b[stks->b_top] <= points.p2)
		{
			rb(stks, 1);
			cnt->rb += 1;
		}
		else
		{
			pa(stks);
			cnt->pa += 1;
			if (stks->a[stks->a_top] <= points.p1)
			{
				ra(stks, 1);
				cnt->ra += 1;
			}
		}
		idx++;
	}
}

void	p_small_nums_to_b(t_holder *stks, t_cnt_acts *cnt,
		t_centers points, int size)
{
	int	idx;

	idx = 0;
	while (idx < size)
	{
		if (stks->a[stks->a_top] >= points.p1)
		{
			ra(stks, 1);
			cnt->ra += 1;
		}
		else
		{
			pb(stks);
			cnt->pb += 1;
			if (stks->b[stks->b_top] >= points.p2)
			{
				rb(stks, 1);
				cnt->rb += 1;
			}
		}
		idx++;
	}
}

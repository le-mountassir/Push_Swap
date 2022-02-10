/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 08:36:59 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/06 08:36:59 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_b_and_pa(t_holder *stks, int size)
{
	t_cnt_acts		cnt;
	t_centers		points;
	int				idx;

	reset_acts(&cnt);
	if (check_sort_b(stks, size))
	{
		while (size--)
			pa(stks);
		return ;
	}
	if (size <= 3)
	{
		small_sort_b(stks, size);
		return ;
	}
	points = get_centers(stks, size, 0);
	p_big_nums_to_a(stks, &cnt, points, size);
	sort_many_args(stks, cnt.pa - cnt.ra);
	idx = -1;
	while (++idx < cnt.ra)
		rrr(stks);
	sort_many_args(stks, cnt.rb);
	sort_b_and_pa(stks, cnt.ra);
}

void	sort_many_args(t_holder *stks, int size)
{
	t_cnt_acts		cnt;
	t_centers		points;
	int				idx;

	reset_acts(&cnt);
	if (check_sort_a(stks, size))
		return ;
	if (size <= 4)
	{
		small_sort_a(stks, size);
		return ;
	}
	points = get_centers(stks, size, 1);
	p_small_nums_to_b(stks, &cnt, points, size);
	idx = -1;
	while (++idx < cnt.ra)
		rrr(stks);
	sort_many_args(stks, cnt.ra);
	sort_b_and_pa(stks, cnt.rb);
	sort_b_and_pa(stks, cnt.pb - cnt.rb);
}

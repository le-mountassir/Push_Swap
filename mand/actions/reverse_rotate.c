/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 08:36:12 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/06 08:36:12 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_holder *stks, int flag)
{
	int	tmp;
	int	idx;

	idx = 0;
	tmp = stks->a[0];
	while (idx < stks->a_top)
	{
		stks->a[idx] = stks->a[idx + 1];
		idx++;
	}
	stks->a[stks->a_top] = tmp;
	if (flag)
		write(1, "rra\n", 4);
}

void	rrb(t_holder *stks, int flag)
{
	int	tmp;
	int	idx;

	idx = 0;
	tmp = stks->b[0];
	while (idx < stks->b_top)
	{
		stks->b[idx] = stks->b[idx + 1];
		idx++;
	}
	stks->b[stks->b_top] = tmp;
	if (flag)
		write(1, "rrb\n", 4);
}

void	rrr(t_holder *stks)
{
	rra(stks, 0);
	rrb(stks, 0);
	write(1, "rrr\n", 4);
}

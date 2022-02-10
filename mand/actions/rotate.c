/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 08:35:53 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/06 08:35:53 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_holder *stks, int flag)
{
	int	tmp;
	int	idx;

	idx = stks->a_top;
	if (idx != -1)
	{
		tmp = stks->a[stks->a_top];
		while (idx > 0)
		{
			stks->a[idx] = stks->a[idx - 1];
			idx--;
		}
		stks->a[0] = tmp;
	}
	if (flag)
		write(1, "ra\n", 3);
}

void	rb(t_holder *stks, int flag)
{
	int	tmp;
	int	idx;

	idx = stks->b_top;
	if (idx != -1)
	{
		tmp = stks->b[stks->b_top];
		while (idx > 0)
		{
			stks->b[idx] = stks->b[idx - 1];
			idx--;
		}
		stks->b[0] = tmp;
	}
	if (flag)
		write(1, "rb\n", 3);
}

void	rr(t_holder *stks)
{
	ra(stks, 0);
	rb(stks, 0);
	write(1, "rr\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 08:36:17 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/06 08:36:17 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_holder *stks, int flag)
{
	int	tmp;

	if (stks->a_top >= 1)
	{
		tmp = stks->a[stks->a_top];
		stks->a[stks->a_top] = stks->a[stks->a_top - 1];
		stks->a[stks->a_top - 1] = tmp;
	}
	if (flag)
		write(1, "sa\n", 3);
}

void	sb(t_holder *stks, int flag)
{
	int	tmp;

	if (stks->b_top >= 1)
	{
		tmp = stks->b[stks->b_top];
		stks->b[stks->b_top] = stks->b[stks->b_top - 1];
		stks->b[stks->b_top - 1] = tmp;
	}
	if (flag)
		write(1, "sb\n", 3);
}

void	ss(t_holder *stks)
{
	sa(stks, 0);
	sb(stks, 0);
	write(1, "ss\n", 3);
}

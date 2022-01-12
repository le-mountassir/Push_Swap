/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 13:18:05 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/08 11:26:10 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_holder *stks)
{
	if (stks->b_top >= 0)
	{
		stks->a_top += 1;
		stks->a[stks->a_top] = stks->b[stks->b_top];
		stks->b_top -= 1;
		write(1, "pa\n", 3);
	}
}

void	pb(t_holder *stks)
{
	if (stks->a_top >= 0)
	{
		stks->b_top += 1;
		stks->b[stks->b_top] = stks->a[stks->a_top];
		stks->a_top -= 1;
		write(1, "pb\n", 3);
	}
}

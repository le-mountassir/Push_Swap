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

#include "../checker.h"

void	rra(t_holder *info)
{
	int	tmp;
	int	idx;

	idx = 0;
	tmp = info->a[0];
	while (idx < info->a_top)
	{
		info->a[idx] = info->a[idx + 1];
		idx++;
	}
	info->a[info->a_top] = tmp;
}

void	rrb(t_holder *info)
{
	int	tmp;
	int	idx;

	idx = 0;
	tmp = info->b[0];
	while (idx < info->b_top)
	{
		info->b[idx] = info->b[idx + 1];
		idx++;
	}
	info->b[info->b_top] = tmp;
}

void	rrr(t_holder *info)
{
	rra(info);
	rrb(info);
}

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

#include "../checker.h"

void	ra(t_holder *info)
{
	int	tmp;
	int	idx;

	idx = info->a_top;
	if (idx != -1)
	{
		tmp = info->a[info->a_top];
		while (idx > 0)
		{
			info->a[idx] = info->a[idx - 1];
			idx--;
		}
		info->a[0] = tmp;
	}
}

void	rb(t_holder *info)
{
	int	tmp;
	int	idx;

	idx = info->b_top;
	if (idx != -1)
	{
		tmp = info->b[info->b_top];
		while (idx > 0)
		{
			info->b[idx] = info->b[idx - 1];
			idx--;
		}
		info->b[0] = tmp;
	}
}

void	rr(t_holder *info)
{
	ra(info);
	rb(info);
}

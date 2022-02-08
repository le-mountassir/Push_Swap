/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 13:18:05 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/08 11:23:37 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	pa(t_holder *info)
{
	if (info->b_top >= 0)
	{
		info->a_top += 1;
		info->a[info->a_top] = info->b[info->b_top];
		info->b_top -= 1;
	}
}

void	pb(t_holder *info)
{
	if (info->a_top >= 0)
	{
		info->b_top += 1;
		info->b[info->b_top] = info->a[info->a_top];
		info->a_top -= 1;
	}
}

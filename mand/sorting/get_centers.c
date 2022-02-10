/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_centers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:09:09 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/09 17:28:41 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_centers	get_centers(t_holder *stks, int size, int flag)
{
	t_centers	point;
	int			*arr;
	int			term;

	arr = copy_stk_2_arr(stks, size, flag);
	sort_tmp_arr(arr, size);
	term = size / 3;
	if (size % 3 == 2)
		term++;
	if (flag == 1)
	{
		point.p1 = arr[size - term];
		point.p2 = arr[size - term * 2];
	}
	else
	{
		point.p1 = arr[term * 2 - 1];
		point.p2 = arr[term - 1];
	}
	free(arr);
	return (point);
}

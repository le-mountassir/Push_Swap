/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sot_tmp_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:09:06 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/02 17:08:22 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_swap(int *arr, int firstindex, int secondindex)
{
	int	temp;

	temp = arr[firstindex];
	arr[firstindex] = arr[secondindex];
	arr[secondindex] = temp;
}

static int	ft_partition(int *arr, int p, int r)
{
	int	q;
	int	i;

	i = p;
	q = p;
	while (i < r)
	{
		if (arr[i] >= arr[r])
			ft_swap(arr, q++, i);
		i++;
	}
	ft_swap(arr, r, q);
	return (q);
}

void	sort_tmp_arr(int *arr, int p, int r)
{
	int	q;

	q = 0;
	if (p < r)
	{
		q = ft_partition(arr, p, r);
		sort_tmp_arr(arr, p, q - 1);
		sort_tmp_arr(arr, q + 1, r);
	}
}

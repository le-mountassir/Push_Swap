/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_6.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:16:39 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/09 17:30:52 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_tmp_arr(int arr[], int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	sort_3_args(t_holder *stks)
{
	if (stks->a[2] > stks->a[1])
		sa(stks, 1);
	if (stks->a[0] < stks->a[1])
	{
		rra(stks, 1);
		if (stks->a[1] < stks->a[2])
			sa(stks, 1);
	}
}

int	*copy_stk_2_arr(t_holder *stks, int size, int flag)
{
	int	*arr;
	int	idx;

	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		exit(1);
	idx = -1;
	if (flag == 1)
	{
		while (++idx < size)
			arr[idx] = stks->a[stks->a_top - idx];
	}
	else
	{
		while (++idx < size)
			arr[idx] = stks->b[stks->b_top - idx];
	}
	return (arr);
}

void	sort_5_args(t_holder *stks)
{
	int	*arr;
	int	idx;

	idx = -1;
	arr = copy_stk_2_arr(stks, 5, 1);
	sort_tmp_arr(arr, 5);
	while (++idx < 5)
	{
		if (arr[1] >= stks->a[stks->a_top])
			pb(stks);
		else
			ra(stks, 1);
	}
	sort_3_args(stks);
	if (stks->b[0] > stks->b[1])
		sb(stks, 1);
	pa(stks);
	pa(stks);
	free(arr);
}

void	sort_a_4_args(t_holder *stks)
{
	if (stks->a[stks->a_top] > stks->a[stks->a_top - 1])
		sa(stks, 1);
	pb(stks);
	if (stks->a[stks->a_top] > stks->a[stks->a_top - 1])
		sa(stks, 1);
	pb(stks);
	if (stks->a[stks->a_top] > stks->a[stks->a_top - 1]
		&& stks->b[stks->b_top] < stks->b[stks->b_top - 1])
		ss(stks);
	else if (stks->a[stks->a_top] > stks->a[stks->a_top - 1])
		sa(stks, 1);
	else if (stks->b[stks->b_top] < stks->b[stks->b_top - 1])
		sb(stks, 1);
	pa(stks);
	if (stks->a[stks->a_top] > stks->a[stks->a_top - 1])
		sa(stks, 1);
	pa(stks);
	if (stks->a[stks->a_top] > stks->a[stks->a_top - 1])
		sa(stks, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setting_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 08:37:06 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/06 08:37:06 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	check_dup(int *arr, int size, int num)
{
	int	idx;

	idx = 0;
	while (idx < size)
	{
		if (arr[idx] == num)
			return (0);
		idx++;
	}
	return (1);
}

static int	count_nums(const char *str, char c)
{
	size_t	size;
	int		flag;

	size = 0;
	flag = 1;
	while (*str)
	{
		if (flag && *str != c)
		{
			size++;
			flag = 0;
		}
		if (*str == c)
			flag = 1;
		str++;
	}
	if (!size)
		error_nd_exit();
	return (size);
}

static void	rotate_stack_a(t_holder *stks)
{
	int	left;
	int	right;
	int	tmp;

	left = 0;
	right = stks->a_top;
	while (left < right)
	{
		tmp = stks->a[left];
		stks->a[left] = stks->a[right];
		stks->a[right] = tmp;
		left++;
		right--;
	}
}

static void	init_stacks(t_holder *stks, int size)
{
	stks->a = (int *)malloc(sizeof(int) * size);
	stks->a_top = -1;
	stks->b = (int *)malloc(sizeof(int) * size);
	stks->b_top = -1;
	stks->size = size;
	if (!stks->a || !stks->b)
		exit(1);
}

void	fill_stacks(t_holder *stks, char *argv[], int argc)
{
	int		size;
	int		idx;
	int		tmp_idx;
	char	**tmp;

	size = 0;
	idx = 1;
	while (idx < argc)
		size += count_nums(argv[idx++], ' ');
	init_stacks(stks, size);
	idx = 1;
	while (idx < argc)
	{
		tmp_idx = 0;
		tmp = ft_split(argv[idx++], ' ');
		while (tmp[tmp_idx])
		{
			stks->a_top += 1;
			if (!ft_atoi(tmp[tmp_idx++], &stks->a[stks->a_top])
				|| !check_dup(stks->a, stks->a_top, stks->a[stks->a_top]))
				error_nd_exit();
		}
		free_splited_arr(tmp);
	}
	rotate_stack_a(stks);
}

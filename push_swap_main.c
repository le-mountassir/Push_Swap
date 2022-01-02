/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:08:39 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/02 17:22:46 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fillstack_a(int argc, char ***argv, t_stack **a)
{
	char	**newargv;

	newargv = *argv;
	if (argc == 2 && ft_strchr(newargv[1], ' '))
	{
		newargv = ft_split(newargv[1], ' ');
		if (!(newargv))
			ft_exit_error();
		argc = ft_num_of_args(newargv) - 1;
		while (argc >= 0)
			ft_addto_top(a, ft_atoi(*(newargv + argc--)));
	}
	else
	{
		argc--;
		while (argc >= 1)
			ft_addto_top(a, ft_atoi(*(newargv + argc--)));
		newargv++;
	}
	check_if_duplicated(newargv);
}

static void	push_swap(t_stack **a, t_stack **b)
{
	if (ft_stack_size(*a) <= 1 || ft_is_sorted(*a))
		return ;
	else if (ft_stack_size(*a) <= 5)
		ft_sort_small_nums(a, b);
	else
		ft_handlemoreitems(a, b);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = ft_init_stack();
	b = ft_init_stack();
	fillstack_a(argc, &argv, &a);
	a->max = ft_largest_in_stack(a);
	a->min = ft_smallest_in_stack(a);
	a->mid = ft_middle_in_stack(a);
	push_swap(&a, &b);
	ft_stkdel(&a);
	ft_stkdel(&b);
}

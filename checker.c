/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:09:55 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/03 14:14:57 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_operate_checker(t_stack **a, t_stack **b, int action_t)
{
	check_type_1(a, b, action_t);
	check_type_1(a, b, action_t);
}

int	ft_convertoperation(char *line)
{
	if (ft_strlen(line) == 2 && !ft_strncmp(line, "sa", 2))
		return (sa);
	else if (ft_strlen(line) == 2 && !ft_strncmp(line, "sb", 2))
		return (sb);
	else if (ft_strlen(line) == 2 && !ft_strncmp(line, "ss", 2))
		return (ss);
	else if (ft_strlen(line) == 2 && !ft_strncmp(line, "pa", 2))
		return (pa);
	else if (ft_strlen(line) == 2 && !ft_strncmp(line, "pb", 2))
		return (pb);
	else if (ft_strlen(line) == 2 && !ft_strncmp(line, "ra", 2))
		return (ra);
	else if (ft_strlen(line) == 2 && !ft_strncmp(line, "rb", 2))
		return (rb);
	else if (ft_strlen(line) == 2 && !ft_strncmp(line, "rr", 2))
		return (rr);
	else if (ft_strlen(line) == 3 && !ft_strncmp(line, "rra", 3))
		return (rra);
	else if (ft_strlen(line) == 3 && !ft_strncmp(line, "rrb", 3))
		return (rrb);
	else if (ft_strlen(line) == 3 && !ft_strncmp(line, "rrr", 3))
		return (rrr);
	ft_exit_error();
	return (-1);
}

void	ft_readoperations(t_stack **a, t_stack **b)
{
	int		r;
	char	*line;

	while (1)
	{
		r = get_next_line(0, &line);
		if (!r)
			break ;
		ft_operate_checker(a, b, ft_convertoperation(line));
		free(line);
	}
	if (ft_is_sorted(*a) && ft_stack_size(*b) == 0)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
}

static void	ft_fillstacks(int argc, char ***argv, t_stack **a)
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

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = ft_init_stack();
	b = ft_init_stack();
	ft_fillstacks(argc, &argv, &a);
	ft_readoperations(&a, &b);
	delete_stack(&a);
	delete_stack(&b);
}

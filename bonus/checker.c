/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 08:37:34 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/06 08:37:34 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	actions(t_holder *info, char *line)
{
	if (!(ft_strcmp("sa\n", line)))
		sa(info);
	else if (!(ft_strcmp("sb\n", line)))
		sb(info);
	else if (!(ft_strcmp("ss\n", line)))
		ss(info);
	else if (!(ft_strcmp("pa\n", line)))
		pa(info);
	else if (!(ft_strcmp("pb\n", line)))
		pb(info);
	else if (!(ft_strcmp("ra\n", line)))
		ra(info);
	else if (!(ft_strcmp("rb\n", line)))
		rb(info);
	else if (!(ft_strcmp("rr\n", line)))
		rr(info);
	else if (!(ft_strcmp("rra\n", line)))
		rra(info);
	else if (!(ft_strcmp("rrb\n", line)))
		rrb(info);
	else if (!(ft_strcmp("rrr\n", line)))
		rrr(info);
	else
		return (0);
	return (1);
}

static void	start_sort(t_holder *info)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		if (!actions(info, line))
		{
			ft_putstr("Error\n");
			free(line);
			exit(1);
		}
		free(line);
	}
	free(line);
}

static int	check_sort_a(t_holder *info, int size)
{
	int	i;

	i = info->a_top - size + 1;
	while (i < info->a_top)
	{
		if (info->a[i] < info->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	checker(int argc, char *argv[])
{
	t_holder	info;

	fill_stacks(&info, argv, argc);
	start_sort(&info);
	if (info.b_top == -1 && check_sort_a(&info, info.size))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	free(info.a);
	free(info.b);
}

int	main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		checker(argc, argv);
	}
}

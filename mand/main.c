/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 08:35:47 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/06 08:35:47 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int argc, char *argv[])
{
	t_holder	stks;

	fill_stacks(&stks, argv, argc);
	if (!check_sort_a(&stks, stks.size))
	{
		if (stks.a_top == 2)
			sort_3_args(&stks);
		else if (stks.a_top == 4)
			sort_5_args(&stks);
		else
			sort_many_args(&stks, stks.size);
	}
	free(stks.a);
	free(stks.b);
}

int	main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		push_swap(argc, argv);
	}
}

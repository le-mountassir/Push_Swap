/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 14:32:53 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/09 17:31:12 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_sort_a(t_holder *stks, int size)
{
	int	i;

	i = stks->a_top - size + 1;
	while (i < stks->a_top)
	{
		if (stks->a[i] < stks->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	check_sort_b(t_holder *stks, int size)
{
	int	i;

	i = stks->b_top - size + 1;
	while (i < stks->b_top)
	{
		if (stks->b[i] > stks->b[i + 1])
			return (0);
		i++;
	}
	return (1);
}

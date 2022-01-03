/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplication.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:09:16 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/02 17:07:19 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_if_duplicated(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		if (ft_isdigitstr(*(argv + i)))
		{
			j = 0;
			while (j < i)
				if (ft_atoi(*(argv + j++)) == ft_atoi(*(argv + i)))
					ft_exit_error();
		}
		else
			ft_exit_error();
		i++;
	}
}

int	ft_abs(int nb)
{
	if (nb < 0)
		nb *= -1;
	return (nb);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 08:35:37 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/06 08:35:37 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reset_acts(t_cnt_acts *acts)
{
	acts->ra = 0;
	acts->rb = 0;
	acts->pa = 0;
	acts->pb = 0;
}

void	error_nd_exit(void)
{
	ft_putstr("Error\n");
	exit(1);
}

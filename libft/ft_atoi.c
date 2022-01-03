/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 08:24:56 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/01 10:19:30 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	result;
	int		minus;

	minus = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	result = 0;
	while (ft_isdigit(*str))
	{
		result *= 10;
		result += (*str) - '0';
		str++;
	}
	result *= minus;
	if (result < -2147483648 || result > 2147483647)
		ft_exit_error();
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:21:16 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/09 16:15:27 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	ft_atoi(char *str, int *result)
{
	long	tmp;
	int		positive;

	tmp = 0;
	positive = 1;
	while ((9 <= *str && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			positive = -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		tmp *= 10;
		tmp += (*str - '0') * positive;
		str++;
	}
	if (*str != '\0' || tmp > 2147483647 || tmp < -2147483648)
		return (0);
	*result = tmp;
	return (1);
}

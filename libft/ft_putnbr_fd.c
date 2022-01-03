/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 08:38:14 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/01 08:38:15 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	a;

	a = n;
	if (a < 0)
	{
		ft_putchar_fd('-', fd);
		a *= -1;
	}
	if (a > 9)
	{
		ft_putnbr_fd(a / 10, fd);
		ft_putnbr_fd((a % 10), fd);
	}
	else
		ft_putchar_fd(a + '0', fd);
}

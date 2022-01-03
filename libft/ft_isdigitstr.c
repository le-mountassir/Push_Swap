/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigitstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 08:42:18 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/01 08:42:19 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigitstr(char *str)
{
	while (*str)
	{
		if (!ft_isdigit(*str))
			if (!(*str == '-' && ft_isdigit(*(str + 1)) && *(str + 1) != '0'))
				return (0);
		str++;
	}
	return (1);
}

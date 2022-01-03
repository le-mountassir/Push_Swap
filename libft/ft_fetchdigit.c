/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fetchdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 08:25:30 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/01 08:25:30 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fetchdigit(char *str)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (ft_isdigit(*str))
			return (str);
		str++;
	}
	return (NULL);
}

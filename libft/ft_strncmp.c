/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 08:37:03 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/01 08:37:03 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cmpchar(char c1, char c2)
{
	if ((unsigned char)c1 != (unsigned char)c2)
		return ((unsigned char)c1 - (unsigned char)c2);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*(s1 + i) && *(s2 + i) && i < n)
	{
		if (ft_cmpchar(*(s1 + i), *(s2 + i)))
			return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
		i++;
	}
	if (i < n)
		return (ft_cmpchar(*(s1 + i), *(s2 + i)));
	return (0);
}

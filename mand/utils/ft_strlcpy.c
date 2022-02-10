/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:22:12 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/07 10:45:18 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	idx;

	if (!dest || !src)
		return (0);
	idx = 0;
	if (size != 0)
	{
		while (idx < size - 1 && *src)
		{
			*dest = *src;
			dest++;
			src++;
			idx++;
		}
		*dest = '\0';
	}
	while (*src++)
		idx++;
	return (idx);
}

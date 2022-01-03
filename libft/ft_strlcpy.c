/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 08:37:27 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/01 08:37:28 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
		return (0);
	if (dsize)
	{
		while (src[i] != '\0' && i < (dsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen((char *) src));
}

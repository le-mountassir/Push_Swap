/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 08:37:31 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/01 08:37:32 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[k] != '\0' && k < size)
		k++;
	while (src[j] != '\0')
		j++;
	while (src[i] != '\0' && (i + k + 1 < size))
	{
		dest[i + k] = src[i];
		i++;
	}
	if (k < size)
		dest[i + k] = '\0';
	return (k + j);
}

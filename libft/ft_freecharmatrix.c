/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freecharmatrix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 08:25:34 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/01 09:45:40 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freecharmatrix(char **matrix)
{
	int	i;

	i = ft_num_of_args(matrix) - 1;
	while (i >= 0)
		free(matrix[i--]);
}

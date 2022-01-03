/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:09:41 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/01 09:35:53 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfree(char *s1, char *s2)
{
	int		len1;
	int		len2;
	char	*result;
	int		i;

	len2 = ft_strlen(s2);
	len1 = ft_strlen(s1);
	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		*(result + i) = *(s1 + i);
		i++;
	}
	i = 0;
	while (i < len2)
	{
		*(result + len1 + i) = *(s2 + i);
		i++;
	}
	*(result + len1 + i) = '\0';
	free(s1);
	return (result);
}

char	*ft_get_after_n(char *str)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	while (str && *(str + i) != '\n' && *(str + i) != '\0')
		i++;
	if (*(str + i) == '\0')
	{
		free(str);
		return (NULL);
	}
	result = (char *)malloc((ft_strlen(str) - i + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i++;
	while (*(str + i))
		*(result + j++) = *(str + i++);
	*(result + j) = '\0';
	free(str);
	return (result);
}

char	*ft_get_before_n(char *str)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str && *(str + i) != '\n' && *(str + i) != '\0')
		i++;
	result = (char *)malloc((i + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (j < i)
	{
		*(result + j) = *(str + j);
		j++;
	}
	*(result + j) = '\0';
	return (result);
}

int	get_next_line(int fd, char **line)
{
	char		*buffer;
	static char	*offset;
	int			r;

	buffer = (char *)malloc(sizeof(char) * 2);
	if (fd < 0 || !line || 1 <= 0
		|| !buffer)
		return (-1);
	r = 1;
	while (r > 0)
	{
		r = read(fd, buffer, 1);
		*(buffer + r) = '\0';
		offset = ft_strjoinfree(offset, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	*line = ft_get_before_n(offset);
	offset = ft_get_after_n(offset);
	if (r < 0)
		return (-1);
	if (r == 0 && !offset)
		return (0);
	return (1);
}

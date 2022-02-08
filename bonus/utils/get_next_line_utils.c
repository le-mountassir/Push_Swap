/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:56:31 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/09 17:44:47 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	gnl_strlen(char *cara)
{
	int	i;

	i = 0;
	if (!cara)
		return (i);
	while (cara[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	int		i;
	int		j;
	int		o_len;
	int		d_len;

	o_len = gnl_strlen(s1);
	d_len = gnl_strlen(s2);
	new = malloc ((o_len + d_len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (i < o_len)
		new[i++] = s1[j++];
	j = 0;
	while (j < d_len)
		new[i++] = s2[j++];
	new[i] = '\0';
	free (s1);
	return (new);
}

char	*ft_substr(char *s, int start, int len)
{
	char	*cara;
	int		i;
	int		j;

	if (!s)
		return (0);
	if (start >= gnl_strlen(s))
		len = 0;
	i = 0;
	j = 0;
	while (i < len && s[i])
		i++;
	cara = malloc((i + 1) * sizeof(char));
	if (!cara)
		return (NULL);
	while (j < i)
		cara[j++] = s[start++];
	cara[i] = '\0';
	return (cara);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 08:37:22 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/06 08:37:22 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# define BUFFER_SIZE 10
# include <stdlib.h>
# include <unistd.h>

typedef struct stacks
{
	int			*a;
	int			*b;
	int			a_top;
	int			b_top;
	int			size;
}				t_holder;

typedef struct get_next_line
{
	int		rd_len;
	char	*cur_line;
	char	*buff;
}			t_storage;

char			*get_next_line(int fd);
int				gnl_strlen( char *cara);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_substr(char *cara, int start, int len);

void			checker(int argc, char *argv[]);

void			sa(t_holder *info);
void			sb(t_holder *info);
void			ss(t_holder *info);
void			pa(t_holder *info);
void			pb(t_holder *info);
void			ra(t_holder *info);
void			rb(t_holder *info);
void			rr(t_holder *info);
void			rra(t_holder *info);
void			rrb(t_holder *info);
void			rrr(t_holder *info);

char			**ft_split(char *s, char c);
char			**free_splited_arr(char **str);
void			ft_putstr(char *s);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
int				ft_atoi(char *str, int *result);
int				ft_strcmp(char *s1, char *s2);
void			fill_stacks(t_holder *info, char *argv[], int argc);
size_t			ft_strlen(const char *str);
void			error_nd_exit(void);

#endif

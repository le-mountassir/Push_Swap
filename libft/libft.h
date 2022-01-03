/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 08:43:38 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/01 10:19:40 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>
# include <unistd.h>
# include <math.h>
# include <time.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/wait.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int				ft_strlen(char *str);
void			ft_exit_error();
int				ft_isdigitstr(char *str);
int				ft_isspace(char c);
int				ft_isdigit(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
char			*ft_itoa(int n);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t cnt);
void			*ft_memmove(void *str1, const void *str2, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
size_t			ft_strlcpy(char *dest, const char *src, size_t dsize);
size_t			ft_strlcat(char *dest, char *src, size_t size);
char			*ft_strchr(char *s, int c);
char			*ft_strrchr(const char *str, int c);
char			*ft_strnstr(char *str, char *to_find, size_t n);
int				ft_strncmp(const char *str1, const char *str2, size_t n);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t count, size_t size);
int				ft_atoi(const char *str);
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
int				ft_num_of_args(char **matrix);
void			ft_freecharmatrix(char **matrix);

#endif

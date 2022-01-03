# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/01 08:43:45 by ahel-mou          #+#    #+#              #
#    Updated: 2022/01/03 17:18:37 by ahel-mou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

SRC = $(wildcard ft_i*.c) $(wildcard ft_mem*.c) $(wildcard ft_put*.c) \
  $(wildcard ft_s*.c) $(wildcard ft_to*.c) ft_atoi.c ft_bzero.c ft_calloc.c ft_exit_error.c ft_num_of_args.c ft_freecharmatrix.c
OBJ = $(SRC:.c=.o)
BONUS = $(wildcard ft_lst*.c)
BONUS_OBJ = $(BONUS:.c=.o)


$(NAME): 
	@$(CC) $(CFLAGS) -c $(SRC)
	@$(AR) $(NAME) $(OBJ)
	@ranlib $(NAME)

all: $(NAME)

bonus:
	@$(CC) $(CFLAGS) -c $(BONUS) $(SRC)
	@$(AR) $(NAME) $(OBJ) $(BONUS_OBJ)
	@ranlib $(NAME)

clean:
	@$(RM) $(OBJ) $(BONUS_OBJ)

fclean:  clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all bonus 
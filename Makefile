# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/31 18:08:32 by ahel-mou          #+#    #+#              #
#    Updated: 2022/01/02 18:23:59 by ahel-mou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS	= -Wall -Wextra -Werror

SRCS = push_swap_main.c\
		./utils/actions.c ./utils/check_duplication.c ./utils/stack_utils.c ./utils/stack_utils2.c ./utils/max_min_mid.c\
		./utils/call_action.c ./utils/sort_small_numbers.c

B_SRCS	=  checker.c

OBJS	= ${SRCS:.c=.o}
B_OBJS	= ${B_SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	@$(MAKE) -C ./libft
	@${CC} ${OBJS} ${CFLAGS} ./libft/libft.a -o ${NAME}

bonus: ${B_OBJS}
	@$(MAKE) -C ./libft
	@${CC} ${B_OBJS} ${CFLAGS} ./libft/libft.a -o checker

re: fclean all

clean:
	@$(MAKE) -C libft fclean
	find . -name "*.o" -delete

fclean: clean
	rm -rf ${NAME}

.PHONY: clean fclean re all bonus

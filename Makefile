# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/06 11:01:27 by ahel-mou          #+#    #+#              #
#    Updated: 2022/01/06 11:01:27 by ahel-mou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=push_swap
NAME_B=checker

FLAGS=-Wall -Werror -Wextra

CC=gcc

SRCS=mand/main.c \
	mand/actions/push.c mand/actions/rotate.c mand/actions/reverse_rotate.c mand/actions/swap.c\
	mand/sorting/small_sorting.c\
	mand/sorting/sort_under_6.c\
	mand/sorting/get_centers.c\
	mand/sorting/push_while_sorting.c\
	mand/sorting/sort_more_t_5.c\
	mand/utils/init_stacks_fill_a.c mand/utils/ft_split.c mand/utils/check_if_sorted.c\
	mand/utils/ft_atoi.c mand/utils/ft_putstr.c mand/utils/ft_strlcpy.c mand/utils/ft_strlen.c mand/utils/error_exit.c\
	
OBJS=$(SRCS:.c=.o)
HEADER= mand/push_swap.h

SRC_B=bonus/checker.c\
	bonus/actions/push.c bonus/actions/rotate.c\
	bonus/actions/reverse_rotate.c bonus/actions/swap.c\
	bonus/utils/init_stacks_fill_a.c\
	bonus/utils/ft_split.c\
	bonus/utils/ft_atoi.c bonus/utils/ft_putstr.c bonus/utils/ft_strlcpy.c\
	bonus/utils/ft_strlen.c bonus/utils/error_exit.c bonus/utils/ft_strcmp.c\
	bonus/utils/get_next_line.c bonus/utils/get_next_line_utils.c\

OBJ_B=$(SRC_B:.c=.o)
HEADER_B= bonus/checker.h

all: $(NAME) bonus

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAG) $(SRCS) -o $(NAME)

bonus: $(OBJ_B) $(HEADER_B)
	$(CC) $(FLAGS) $(SRC_B) -o $(NAME_B)

clean:
	find . -name "*.o" -delete

fclean: clean
	rm -f $(NAME) $(NAME_B)

re: fclean all

.PHONY: all bonus clean fclean re

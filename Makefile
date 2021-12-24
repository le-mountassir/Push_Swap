# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/22 17:12:20 by ahel-mou          #+#    #+#              #
#    Updated: 2021/12/22 17:33:37 by ahel-mou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

NORM = -Wall -Werror -Wextra

m_SRC = 
m_OBJ = ${m_SRC:.c=.o}
m_lib = 

all: m

m: $(m_OBJ)
	
clean:
	find . -name "*.o" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean, fclean, all, re
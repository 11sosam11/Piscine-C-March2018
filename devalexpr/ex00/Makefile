# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saolivei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 17:02:18 by saolivei          #+#    #+#              #
#    Updated: 2018/03/26 17:02:24 by saolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRCS = main.c op.c ft_putchar.c ft_putnbr.c eval_expr.c

OUT = eval_expr.o main.o op.o ft_putnbr.o ft_putchar.o 

all:
	gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME)
clean:
	rm -f $(OUT)

fclean: clean
	rm -f $(NAME)
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saolivei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 17:02:18 by saolivei          #+#    #+#              #
#    Updated: 2018/03/27 00:39:42 by saolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM = do-op

OUT = do-op 

SRCS = main.c whatever.c

all:
	gcc -Wall -Wextra -Werror -c $(SRCS) -o $(OUT)
	
clean:
	rm -f $(OUT)

fclean: clean
	rm -f $(PROGRAM)

re: fclean all

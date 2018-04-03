# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alyle <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/31 22:30:44 by alyle             #+#    #+#              #
#    Updated: 2018/04/01 20:44:15 by alyle            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

LIBNAME = libft.a

GCCFLAGS = -Wall -Wextra -Werror

SRCS = ft_check_rush.c ft_helper.c ft_output_rush.c rush00.c rush01.c rush02.c \
	   rush03.c rush04.c main.c ft_import.c

OBJ =  ft_check_rush.o ft_helper.o ft_output_rush.o rush00.o rush01.o rush02.o \
	   rush03.o rush04.o main.o ft_import.o

all: $(LIBNAME) $(NAME)

$(NAME):
	@gcc $(GCCFLAGS) -o $(NAME) $(SRCS)

$(LIBNAME):
	@gcc $(GCCFLAGS) -c $(SRCS)
	@ar rc $(LIBNAME) $(OBJ)
	@ranlib $(LIBNAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(LIBNAME)

re: fclean all

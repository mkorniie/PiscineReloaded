# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkorniie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/30 10:55:40 by mkorniie          #+#    #+#              #
#    Updated: 2017/10/30 13:01:01 by mkorniie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	  srcs/ft_strlen.c srcs/ft_swap.c
HEADER = includes/*.h
OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o \
	  ft_strlen.o ft_swap.o

all:
	gcc -c $(SRC) $(HEADER)
	ar rc libft.a $(OFILES)
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f  libft.a
re: fclean all

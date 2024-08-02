# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wabolles <wabolles@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 08:56:33 by wabolles          #+#    #+#              #
#    Updated: 2024/08/02 10:21:21 by wabolles         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -I./inc
HEADER	=	inc/philo.h
NAME	=	philo

FILES	=	./philosophers.c \
			./utils/ft_atoi.c \
			./utils/usage_display.c \
			./utils/parsing.c	\

OBJS	= 	$(FILES:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: clean
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scarpent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/20 14:03:10 by scarpent          #+#    #+#              #
#    Updated: 2019/02/27 09:00:06 by scarpent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=ft_advanced_do-op
INC=./includes
SRC=./srcs/ft_putchar.c\
	./srcs/ft_putstr.c\
	./srcs/ft_putnbr.c\
	./srcs/ft_strlen.c\
	./srcs/ft_atoi.c\
	./srcs/operations.c\
	./srcs/ft_usage.c\
	./srcs/doop.c
OBJ=$(notdir $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ):
	$(CC) $(CFLAGS) -I $(INC) -c $(SRC)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

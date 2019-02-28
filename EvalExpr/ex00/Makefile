# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scarpent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/23 10:33:04 by scarpent          #+#    #+#              #
#    Updated: 2019/02/24 21:57:11 by scarpent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Wextra -Werror
NAME=eval_expr
INC=./includes
SRC=./srcs/main.c\
	./srcs/eval_expr.c\
	./srcs/ft_doop.c\
	./srcs/operations.c\
	./srcs/ft_is_number.c\
	./srcs/ft_atoi.c\
	./srcs/print.c\
	./srcs/ft_strlen.c\
	./srcs/ft_putchar.c
OBJ=$(notdir $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I $(INC) -o $(NAME) $(OBJ)

$(OBJ):
	$(CC) $(CFLAGS) -I $(INC) -c $(SRC)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

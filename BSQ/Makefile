# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scarpent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/25 10:24:35 by scarpent          #+#    #+#              #
#    Updated: 2019/02/27 23:32:05 by scarpent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc

CFLAGS=-Wall -Wextra -Werror

NAME=bsq

LIBDIR=./lib

INCDIR=./includes

SRCDIR=./srcs

SRC=$(SRCDIR)/main.c\
	$(SRCDIR)/parsing.c\
	$(SRCDIR)/display.c\
	$(SRCDIR)/ft_init.c\
	$(SRCDIR)/ft_init_tab.c\
	$(SRCDIR)/ft_read_line.c\
	$(SRCDIR)/ft_read_second_line.c

LIB=$(LIBDIR)/ft_atoi.c \
	$(LIBDIR)/ft_putchar.c \
	$(LIBDIR)/ft_putstr.c \
	$(LIBDIR)/ft_putnbr.c \
	$(LIBDIR)/ft_strcat.c \
	$(LIBDIR)/ft_strcmp.c \
	$(LIBDIR)/ft_strcpy.c \
	$(LIBDIR)/ft_strdup.c \
	$(LIBDIR)/ft_strlen.c \
	$(LIBDIR)/ft_strrev.c \
	$(LIBDIR)/ft_strstr.c \
	$(LIBDIR)/ft_swap.c \
	$(LIBDIR)/ft_strncpy.c \
	$(LIBDIR)/ft_is_numeric.c

INC=$(INCDIR)

OBJ=$(SRC:.c=.o)

OBJLIB=$(LIB:.c=.o)

OBJ+=$(OBJLIB)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) -I $(INC) $(OBJ)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

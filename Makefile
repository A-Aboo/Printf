# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anasimi <anasimi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/15 11:36:18 by anasimi           #+#    #+#              #
#    Updated: 2026/01/17 16:23:12 by anasimi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_printf.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_puthexal.c \
	  ft_puthexau.c \
	  ft_putnbr.c \
	  ft_putnbr_un.c \
	  ft_putpoint.c 
P = programme
OBJ	= $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 
#$(NAME): $(OBJ)
#	$(CC) $(CFLAGS) $(OBJ) -o $(P)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)
deletep:
	rm -f $(P)
re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 16:06:08 by daniviei          #+#    #+#              #
#    Updated: 2025/11/12 22:15:39 by daniviei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror
LIB = libft/
SRCS = ft_putnbr_hex.c \
       ft_putnbr.c \
       ft_putstr.c \
       ft_printf.c

H_SRCS = libft/libft.h

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIB)
	ar rcs $(NAME) $(OBJ) $(LIB)libft.a

.c:.o
	$(CC) $(FLAGS) -I $(H_SRCS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C $(LIB) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIB) fclean

re: fclean all


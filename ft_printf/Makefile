# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 21:08:21 by myokogaw          #+#    #+#              #
#    Updated: 2023/07/21 21:04:03 by myokogaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of project
NAME = libftprintf.a

# Compiler
GCC = gcc

# C Flags
FLAGS = -Wall -Werror -Wextra


# Files
FILES = ft_printf \
		ft_arg_check \
		ft_putnbr_p \
		ft_putnbr_hex \
		ft_putnbr_int \
		ft_putnbr_unsigned_int \
		ft_putstr \
		ft_putchar \

# Object files
OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

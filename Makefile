# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhuynh <dhuynh@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/04 00:18:00 by dhuynh            #+#    #+#              #
#    Updated: 2017/10/05 01:08:45 by dhuynh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

C_FIL = *.c
C_LOC = src
C_SRC = $(addprefix $(C_LOC)/, $(C_FIL))

O_FIL = *.o
O_LOC = obj
O_SRC = $(addprefix $(O_LOC)/, $(O_FIL))


H_LOCS = -Iinc -Ilibft

GCC_FLAGS = gcc -Wall -Wextra -Werror

LIB = libft/libft.a

all: $(NAME)

$(NAME):
	cd libft && make
	$(GCC_FLAGS) $(H_LOCS) $(LIB) $(C_SRC) -o $(NAME)

clean:
	cd libft && make clean

fclean: clean
	cd libft && make fclean
	/bin/rm -f $(NAME)

re: fclean all

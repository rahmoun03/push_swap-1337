# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 04:23:38 by arahmoun          #+#    #+#              #
#    Updated: 2023/01/27 09:57:15 by arahmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = ft_printf/ft_putchar.c ft_printf/ft_putnbr.c ft_printf/ft_putstr.c ft_printf/ft_printf.c \
ft_printf/ft_putunsigned.c ft_printf/ft_printhexa.c ft_printf/ft_strlen.c

PARS = push_swap.c push_swap_utils.c push_swap_utils2.c ft_error.c ft_atoi.c ft_linked_list.c \
ft_strjoin.c ft_split.c

SORT = sort_func/sort2_3.c sort_func/check_if_sort.c sort_func/sort4_5.c \
sort_func/sort100.c

FUNCS = ${SRC} ${SORT} ${PARS} the_last_element.c main.c

FLAGS = -Wall -Wextra -Werror #-fsanitize=address -g3

all : ${NAME}

${NAME} :${FUNCS}
	@cc ${FLAGS} ${FUNCS} -o $@
	@tput setaf 10 ; echo "The executable file has been ready ✅"
clean :
	@clear
	@rm -rf ${NAME}
	@tput setaf 9; echo "CLEAN 🗑️"

fclean :clean

re :fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jungchoi <jungchoi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/26 12:45:45 by jungchoi          #+#    #+#              #
#    Updated: 2022/07/10 16:18:47 by jungchoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
	utils_csp.c \
	utils_di.c \
	utils_uxX.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJS)
	ar rs $(NAME) $(OBJS)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY = all clean fclean re

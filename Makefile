# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: je <marvin@42.fr>                          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/02 12:25:15 by je                #+#    #+#              #
#    Updated: 2025/01/02 12:44:33 by je               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
AR = ar rcs
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

SOURCES = ft_for_nbr.c ft_for_str.c ft_printf.c 

OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re

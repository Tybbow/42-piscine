# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/06 16:07:11 by tiskow            #+#    #+#              #
#    Updated: 2016/11/06 16:07:14 by tiskow           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCSDIR = -c $(patsubst %, srcs/%, $(_SRCS)) 
_SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS = $(_SRCS:.c=.o)
HEADER = -I ./includes/
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rc

all: $(NAME)

$(NAME): compilation

compilation:
	$(CC) $(SRCSDIR) $(HEADER) $(CFLAGS)
	$(AR) $(NAME) $(OBJS)
	@(ranlib $(NAME))

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
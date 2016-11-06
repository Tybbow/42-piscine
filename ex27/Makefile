# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/06 16:07:11 by tiskow            #+#    #+#              #
#    Updated: 2016/11/06 16:45:48 by tiskow           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
HEADER = -I ./includes/
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)
	$(CC) $(HEADER) $(CFLAGS) ft_display_file.c -o ft_display_file	

$(NAME):
	$(CC) $(HEADER) $(CFLAGS) ft_display_file.c -o ft_display_file

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 12:08:01 by dpaes-so          #+#    #+#              #
#    Updated: 2024/10/24 12:24:00 by dpaes-so         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =ft_display_file
CC = cc
FLAGS = -Werror -Wextra -Wall
SRC = ft_display_file.c
OFILES = $(SRC:.c=.o)

all:
	$(CC) $(FLAGS) $(SRC) -c 
	$(CC) -o $(NAME) $(OFILES)
	
clean:
	rm -f $(OFILES)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all
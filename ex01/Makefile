# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/16 16:59:37 by bel-kdio          #+#    #+#              #
#    Updated: 2023/07/16 19:02:22 by bel-kdio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

NAME = PhoneBook

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -rf

CFLAGS = -Wall -Werror -Wextra

all = $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
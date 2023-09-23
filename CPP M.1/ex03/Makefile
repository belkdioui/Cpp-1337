# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 17:31:12 by bel-kdio          #+#    #+#              #
#    Updated: 2023/09/22 17:32:09 by bel-kdio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

NAME = unnecessaryViolence

OBJ = $(SRC:.cpp=.o)

RM = rm -rf

CFLAGS = -Wall -Werror -Wextra -std=c++98 

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) $< -c -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
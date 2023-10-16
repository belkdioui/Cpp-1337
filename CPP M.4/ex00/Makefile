# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 10:32:27 by bel-kdio          #+#    #+#              #
#    Updated: 2023/10/14 12:14:05 by bel-kdio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp
OBJ = $(SRC:.cpp=.o)
NAME = ex00
RM =rm -rf
CFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp %.hpp
	$(CC) $(CFLAGS) $< -c -o $@

%.o:%.cpp
	$(CC) $(CFLAGS) $< -c -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
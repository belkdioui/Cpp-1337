# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 07:44:26 by bel-kdio          #+#    #+#              #
#    Updated: 2023/10/19 13:46:38 by bel-kdio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
SRC = main.cpp Cure.cpp Ice.cpp AMateria.cpp Character.cpp MateriaSource.cpp
OBJ = $(SRC:.cpp=.o)
NAME = ex03
RM =rm -rf
CFLAGS = -Wall -Werror -Wextra -std=c++98 #-g -fsanitize=address

all: $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp %.hpp
	@$(CC) $(CFLAGS) $< -c -o $@

%.o:%.cpp
	@$(CC) $(CFLAGS) $< -c -o $@

clean :
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 10:05:59 by bel-kdio          #+#    #+#              #
#    Updated: 2023/11/07 11:59:01 by bel-kdio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = Array
RM =rm -rf
CFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp %.hpp
	$(CC) $(CFLAGS) $< -c -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) $< -c -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
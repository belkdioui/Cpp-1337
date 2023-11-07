# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 23:53:21 by bel-kdio          #+#    #+#              #
#    Updated: 2023/11/05 23:53:26 by bel-kdio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = Iter
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
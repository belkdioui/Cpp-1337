# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 13:01:20 by bel-kdio          #+#    #+#              #
#    Updated: 2023/11/12 13:14:16 by bel-kdio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = easyfind
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra -std=c++98


all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $^ -o $@

%.o: %.cpp *.hpp
	$(CXX) $(CFLAGS) -c $< -o $@

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
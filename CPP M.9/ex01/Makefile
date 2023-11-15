# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 12:32:23 by bel-kdio          #+#    #+#              #
#    Updated: 2023/11/15 09:34:44 by bel-kdio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
SRC = main.cpp RPN.cpp
OBJ = $(SRC:.cpp=.o)
NAME = RPN
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra -std=c++98


all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $^ -o $@

%.o: %.cpp %.hpp
	$(CXX) $(CFLAGS) -c $< -o $@

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
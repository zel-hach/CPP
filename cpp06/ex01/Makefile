# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 16:55:08 by zel-hach          #+#    #+#              #
#    Updated: 2023/01/04 21:29:38 by zel-hach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serialisation
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
INCLUDE = serialise.hpp
OBJECTS = $(SRC:.cpp=.o)

all :$(NAME)
Serialisation: $(OBJECTS) $(INCLUDE)
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)
%.o : %.cpp $(INCLUDE)
	$(CC) $(FLAGS) -o $@ -c $<
clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
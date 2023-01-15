# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 16:55:08 by zel-hach          #+#    #+#              #
#    Updated: 2023/01/15 20:58:45 by zel-hach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Find
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
OBJECTS = $(SRC:.cpp=.o)
INCLUDE = easyfind.hpp

all :$(NAME)
Find: $(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)
%.o : %.cpp $(INCLUDE)
	$(CC) $(FLAGS) -o $@ -c $<
clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
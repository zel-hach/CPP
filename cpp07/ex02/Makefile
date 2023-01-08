# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 16:55:08 by zel-hach          #+#    #+#              #
#    Updated: 2023/01/08 21:30:30 by zel-hach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
OBJECTS = $(SRC:.cpp=.o)
INCLUDE = array.hpp

all :$(NAME)
iter: $(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)
%.o : %.cpp $(INCLUDE)
	$(CC) $(FLAGS) -o $@ -c $<
clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
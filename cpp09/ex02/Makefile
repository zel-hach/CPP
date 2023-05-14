# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 15:47:17 by zel-hach          #+#    #+#              #
#    Updated: 2023/05/11 15:48:26 by zel-hach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp PmergeMe.cpp
INCLUDE = PmergeMe.hpp
OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

PmergeMe :	$(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
%.o : %.cpp $(INCLUDE)
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -rf $(OBJECTS)
fclean:clean
	rm -rf $(NAME)

re: fclean all
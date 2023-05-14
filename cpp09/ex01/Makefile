# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 15:44:32 by zel-hach          #+#    #+#              #
#    Updated: 2023/05/11 15:44:33 by zel-hach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp RPN.cpp
INCLUDE = RPN.hpp
OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

RPN :	$(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
%.o : %.cpp $(INCLUDE)
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -rf $(OBJECTS)
fclean:clean
	rm -rf $(NAME)

re: fclean all
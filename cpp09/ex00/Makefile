# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/28 12:42:26 by zel-hach          #+#    #+#              #
#    Updated: 2023/03/28 12:43:50 by zel-hach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp BitcoinExchange.cpp
INCLUDE = BitcoinExchange.hpp
OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

btc:	$(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
%.o : %.cpp $(INCLUDE)
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -rf $(OBJECTS)
fclean:clean
	rm -rf $(NAME)

re: fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 18:55:30 by zel-hach          #+#    #+#              #
#    Updated: 2022/12/21 14:42:51 by zel-hach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Harl.cpp
OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)
INCLUDE = Harl.hpp
Harl: $(OBJECTS) $(INCLUDE)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
%.o : %.cpp $(INCLUDE)
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -rf $(OBJECTS)
fclean:clean
	rm -rf $(NAME)

re: fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 13:17:56 by zel-hach          #+#    #+#              #
#    Updated: 2022/12/21 14:41:38 by zel-hach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)
INCLUDE= Zombie.hpp

Zombie:	$(OBJECTS) $(INCLUDE)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
%.o : %.cpp $(INCLUDE)
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -rf $(OBJECTS)
fclean:clean
	rm -rf $(NAME)

re: fclean all
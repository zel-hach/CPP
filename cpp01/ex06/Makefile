# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 18:56:05 by zel-hach          #+#    #+#              #
#    Updated: 2022/12/21 11:44:09 by zel-hach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harlfilter
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

SRC =main.cpp Harl.cpp
OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

INCLUDE : Harl.hpp
Harlfilter: $(OBJECTS) $(INCLUDE)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
%.o : %.cpp $(INCLUDE)
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -rf $(OBJECTS)
fclean:clean
	rm -rf $(NAME)
re: fclean all
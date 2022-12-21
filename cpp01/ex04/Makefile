# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 18:55:00 by zel-hach          #+#    #+#              #
#    Updated: 2022/12/21 14:42:33 by zel-hach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ReplaceFile
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp ReplaceFile.cpp
OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)
INCLUDE = ReplaceFile.hpp
ReplaceFile: $(OBJECTS) $(INCLUDE)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
%.o : %.cpp $(INCLUDE)
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -rf $(OBJECTS)
fclean:clean
	rm -rf $(NAME)

re: fclean all
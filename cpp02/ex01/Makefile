# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 16:25:08 by zel-hach          #+#    #+#              #
#    Updated: 2022/12/23 16:27:00 by zel-hach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp fixed.cpp
OBJECTS = $(SRC:.cpp=.o)
INCLUDE= fixed.hpp

all: $(NAME)

Fixed:	$(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
%.o : %.cpp $(INCLUDE)
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -rf $(OBJECTS)
fclean:clean
	rm -rf $(NAME)

re: fclean all
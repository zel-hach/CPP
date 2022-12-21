# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 14:41:21 by zel-hach          #+#    #+#              #
#    Updated: 2022/12/21 14:41:22 by zel-hach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Account.cpp tests.cpp
OBJECTS = $(SRC:.c=.o)

all: $(NAME)
INCLUDE=Account.hpp

Account:	$(OBJECTS) $(INCLUDE)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
%.o : %.c $(INCLUDE)
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -rf $(NAME)
fclean:clean
	rm -rf $(NAME)

re: fclean all
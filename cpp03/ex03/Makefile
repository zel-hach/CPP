# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 16:55:08 by zel-hach          #+#    #+#              #
#    Updated: 2022/12/24 20:53:59 by zel-hach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
INCLUDE = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
OBJECTS = $(SRC:.cpp=.o)

all :$(NAME)
ScavTrap: $(OBJECTS) $(INCLUDE)
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)
%.o : %.cpp $(INCLUDE)
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
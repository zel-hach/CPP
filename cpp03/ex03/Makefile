# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 16:55:08 by zel-hach          #+#    #+#              #
#    Updated: 2022/12/25 19:11:29 by zel-hach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap
CC = c++
FLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
INCLUDE = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
OBJECTS = $(SRC:.cpp=.o)

all :$(NAME)
DiamondTrap: $(OBJECTS) $(INCLUDE)
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)
%.o : %.cpp $(INCLUDE)
	$(CC) $(FLAGS) -o $@ -c $<
clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
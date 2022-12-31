# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 16:55:08 by zel-hach          #+#    #+#              #
#    Updated: 2022/12/31 18:02:49 by zel-hach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
INCLUDE = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp
OBJECTS = $(SRC:.cpp=.o)

all :$(NAME)
Bureaucrat: $(OBJECTS) $(INCLUDE)
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)
%.o : %.cpp $(INCLUDE)
	$(CC) $(FLAGS) -o $@ -c $<
clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
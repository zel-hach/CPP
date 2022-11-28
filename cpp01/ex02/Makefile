NAME = Creveau
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
OBJECTS = $(SRC:.c=.o)

all: $(NAME)

Creveau: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
%.o : %.c $(INCLUDE)
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -rf $(NAME)
fclean:clean
	rm -rf $(NAME)

re: fclean all
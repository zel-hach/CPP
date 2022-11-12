NAME = megaphone
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
OBJECTS = $(SRC:.c=.o)

all: $(NAME)

megaphone:	$(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
%.o : %.c 
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -rf $(NAME)
fclean:clean
	rm -rf $(NAME)

re: fclean all
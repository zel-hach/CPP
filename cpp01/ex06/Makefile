NAME = Harlfilter
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wno-implicit-fallthrough

SRC =main.cpp Harl.cpp
OBJECTS = $(SRC:.c=.o)

all: $(NAME)

INCLUDE : Harl.hpp
Harlfilter: $(OBJECTS) $(INCLUDE)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
%.o : %.c $(INCLUDE)
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -rf $(NAME)
fclean:clean
	rm -rf $(NAME)

re: fclean all
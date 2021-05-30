SRCS = main.cpp

CC = clang++

CFLAGS = -Wall -Werror -Wextra

NAME = identify

all:
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

.PHONY: clean flclean $(NAME)

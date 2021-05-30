SRCS = LiteralValue.cpp main.cpp

CC = clang++

CFLAGS = -Wall -Werror -Wextra

NAME = convert

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

.PHONY: clean flclean $(NAME)

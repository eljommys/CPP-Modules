NAME = megaphone

SRCS = megaphone.cpp

all: $(NAME)

$(NAME):
	clang++ -Wall -Wextra -Werror $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean $(NAME)

.PHONY: all clean fclean re

NAME = megaphone

SRCS = megaphone.cpp
OBJS = $(SRCS: .cpp=.o)

all: $(NAME)

$(NAME):
	c++ -Wall -Wextra -Werror -o $(NAME) $(OBJS)

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(NAME) $(OBJS)

re: fclean $(NAME)

.PHONY: all clean fclean re

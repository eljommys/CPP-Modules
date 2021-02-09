NAME = replace

all: $(NAME)

$(NAME):
	clang++ -Wall -Werror -Wextra main.cpp -o $(NAME)

clean:
	rm -rf hola.txt.replace

fclean: clean
	rm -rf $(NAME)

test:
	./replace hola.txt tal jaime

re: clean $(NAME)

.PHONY: clean fclean re
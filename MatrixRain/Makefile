CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -lncurses
NAME = matrix_rain

SRC_DIR = src/

SRC = $(wildcard $(SRC_DIR)*.c)

all: $(NAME)

$(NAME):
	@clang $(CFLAGS) -Iinc -o $(NAME) $(SRC)

uninstall:
	@rm -rf $(NAME)

reinstall: uninstall $(NAME)





CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
NAME = mx_cat

SRC_DIR = src/
OBJ_DIR = obj/

SRC = $(wildcard $(SRC_DIR)*.c)
OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@clang $(CFLAGS) -Iinc -o $@ -c $<

$(NAME): $(OBJ_DIR) $(OBJ)
	@clang $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ_DIR)

uninstall: clean
	@rm -rf $(NAME)

reinstall: uninstall $(NAME)

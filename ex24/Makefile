NAME := libft.a

CC := gcc

CFLAGS := -Wall -Werror -Wextra

VPATH := ./src/ ./obj/ ./includes/

H_DIR := ./includes
S_DIR := ./srcs/
O_DIR := ./objs/

LIST := ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap

OBJ := $(patsubst %,$(O_DIR)%,$(addsuffix .o,$(LIST)))

all: $(O_DIR) $(NAME)

$(O_DIR):
	-mkdir -p $@

$(NAME): $(OBJ)
	ar rcs $@ $(O_DIR)*.o
	ranlib $@

$(O_DIR)%.o: $(S_DIR)%.c
	$(CC) $(CFLAGS) -o $@ -c $< -I$(H_DIR)

clean:
	-rm -rf $(O_DIR)

fclean: clean
	-rm -rf $(NAME)

re: fclean all

.SILENT:

.PHONY: all clean fclean re

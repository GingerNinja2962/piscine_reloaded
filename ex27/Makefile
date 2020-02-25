NAME := libft.a

CC := gcc

CFLAGS := -Wall -Werror -Wextra

VPATH:= ./src/ ./obj/ ./headers/

H_DIR := ./
O_DIR := ./obj/
S_DIR := ./

LIST :=	ft_putchar ft_putstr ft_reader ft_read_file

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
	-rm -rf	$(O_DIR)

fclean: clean
	-rm -rf $(NAME)

re: fclean all

#.SILENT:

.PHONY: all clean fclean re

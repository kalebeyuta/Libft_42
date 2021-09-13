
SRC_PART = ./ft_atoi.c ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c ./ft_strchr.c ./ft_strlcpy.c ./ft_strlen.c ./ft_strncat.c ./ft_strncmp.c ./ft_strstr.c /ft_tolower.c ./ft_toupper.c
NAME = libft.a
FLAGS = -Wall -Werror -Wextra
CC = gcc 
HDRS = libft.h
OBJ_PART = $(SRC_PART:.c=.o)

$(NAME): $(OBJ_PART) $(HDRS)
	@$(CC) $(SRC_PART) $(FLAGS)
	@ar r $(NAME) $(OBJ_PART)


all: $(NAME)

clean:
	@/bin/rm -f $(OBJ_BONUS)
	@echo "\033[90m[\033[91mDeleting\033[90m]\033[31m Object files deleted\033[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[90m[\033[91mDeleting\033[90m]\033[31m Libft.a deleted.\033[0m"

re: fclean all


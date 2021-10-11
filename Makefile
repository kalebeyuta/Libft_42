
SRC_PART = ./ft_atoi.c  ./ft_bzero.c ./ft_calloc.c ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c ./ft_strrchr.c \
			./ft_memchr.c  ./ft_memcmp.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_putchar_fd.c ./ft_putendl_fd.c ./ft_strlcpy.c ./ft_strlen.c \
			./ft_putnbr_fd.c ./ft_putstr_fd.c ./ft_strlcat.c ./ft_strncmp.c   ./ft_tolower.c ./ft_toupper.c ./ft_strdup.c ./ft_striteri.c ./ft_strjoin.c \
			./ft_strmapi.c ./ft_strnstr.c ./ft_strtrim.c ./ft_substr.c  ./ft_itoa.c ./ft_split.c ./ft_strchr.c
NAME = libft.a
FLAGS = -Wall -Werror -Wextra -g
CC = gcc 
HDRS = libft.h
OBJ_PART = $(SRC_PART:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_PART) $(HDRS)
	ar -rcs $(NAME) $(OBJ_PART)



clean:
	rm -f *.o
	echo "\033[90m[\033[91mDeleting\033[90m]\033[31m Object files deleted\033[0m"

fclean: clean
	/bin/rm -f $(NAME)
	echo "\033[90m[\033[91mDeleting\033[90m]\033[31m Libft.a deleted.\033[0m"

re: fclean all


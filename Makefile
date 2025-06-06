NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEADER = libft.h

SRC =	./ft_isalnum.c\
		./ft_isalpha.c\
		./ft_isascii.c\
		./ft_isdigit.c\
		./ft_isprint.c\
		./ft_split.c\
		./ft_strlcat.c\
		./ft_strchr.c\
		./ft_strlcpy.c\
		./ft_strdup.c\
		./ft_striteri.c\
		./ft_strjoin.c\
		./ft_strlen.c\
		./ft_strmapi.c\
		./ft_strncmp.c\
		./ft_strnstr.c\
		./ft_strrchr.c\
		./ft_strtrim.c\
		./ft_substr.c\
		./ft_bzero.c\
		./ft_calloc.c\
		./ft_memchr.c\
		./ft_memcmp.c\
		./ft_memcpy.c\
		./ft_memmove.c\
		./ft_memset.c\
		./ft_atoi.c\
		./ft_itoa.c\
		./ft_tolower.c\
		./ft_toupper.c\
		./ft_printf.c\
		./ft_printf_utils.c\
		./ft_putchar_fd.c\
		./ft_putendl_fd.c\
		./ft_putnbr_fd.c\
		./ft_putstr_fd.c\
		./ft_lstadd_back.c\
		./ft_lstadd_front.c\
		./ft_lstclear.c\
		./ft_lstdelone.c\
		./ft_lstiter.c\
		./ft_lstlast.c\
		./ft_lstmap.c\
		./ft_lstnew.c\
		./ft_lstsize.c\
		./get_next_line.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs -o $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ)
	ar rcs -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

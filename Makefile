#Makefile for libft

# Project name
NAME = libft.a

# Colours
GREEN = \033[0;32m
RED = \033[0;31m

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./inc

# Directories
SRC_DIR = src
OBJ_DIR = obj

# Source files
SRC_CHAR =		./src/char/ft_isalnum.c\
				./src/char/ft_isalpha.c\
				./src/char/ft_isascii.c\
				./src/char/ft_isdigit.c\
				./src/char/ft_isprint.c\
				./src/char/ft_isspace.c\
				./src/char/ft_tolower.c\
				./src/char/ft_toupper.c

SRC_INT =		./src/int/ft_atoi.c\
				./src/int/ft_itoa.c

SRC_LIST =		./src/list/ft_lstadd_back.c\
				./src/list/ft_lstadd_front.c\
				./src/list/ft_lstclear.c\
				./src/list/ft_lstdelone.c\
				./src/list/ft_lstiter.c\
				./src/list/ft_lstlast.c\
				./src/list/ft_lstmap.c\
				./src/list/ft_lstnew.c\
				./src/list/ft_lstsize.c

SRC_MEM =		./src/mem/ft_bzero.c\
				./src/mem/ft_calloc.c\
				./src/mem/ft_free.c\
				./src/mem/ft_memchr.c\
				./src/mem/ft_memcmp.c\
				./src/mem/ft_memcpy.c\
				./src/mem/ft_memmove.c\
				./src/mem/ft_memset.c

SRC_PRINT =		./src/print/ft_printf.c\
				./src/print/ft_perror.c\
				./src/print/ft_putchar_fd.c\
				./src/print/ft_putendl_fd.c\
				./src/print/ft_putnbr_fd.c\
				./src/print/ft_putstr_fd.c

SRC_STRING =	./src/string/ft_split.c\
				./src/string/ft_strlcat.c\
				./src/string/ft_strchr.c\
				./src/string/ft_strlcpy.c\
				./src/string/ft_strdup.c\
				./src/string/ft_striteri.c\
				./src/string/ft_strjoin.c\
				./src/string/ft_strlen.c\
				./src/string/ft_strmapi.c\
				./src/string/ft_strncmp.c\
				./src/string/ft_strnstr.c\
				./src/string/ft_strrchr.c\
				./src/string/ft_strtrim.c\
				./src/string/ft_substr.c

SRC_UTILS =		./src/utils/ft_printf_utils.c\
				./src/utils/get_next_line.c

SRC = $(SRC_CHAR) $(SRC_INT) $(SRC_LIST) $(SRC_MEM) $(SRC_PRINT) $(SRC_STRING) $(SRC_UTILS)

OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))
HEAD = inc/libft.h

# Rules
all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	@ar rcs -o $(NAME) $(OBJ)
	@echo "$(GREEN)✅ $(NAME) Compiled successfully!"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEAD)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)🧹 $(NAME) Object files removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)🧹 $(NAME) removed!"

re: fclean all

debug: CFLAGS += -g
debug: re

.PHONY: all clean fclean re debug

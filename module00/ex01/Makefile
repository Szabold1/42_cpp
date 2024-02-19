# Makefile for C++ module 00 ex01

# Compiler and Flags
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Target Binary
NAME = awesome_phone_book

# File and Directory Management
rm = rm -f

# Source Directories
SRC_DIR = ./src

# Source Files
SRC = Contact.cpp \
		main.cpp \
		PhoneBook.cpp \
		PhoneBookHelper.cpp

# Object Files
OBJ = $(SRC:%.cpp=$(SRC_DIR)/%.o)

# Compilation Rules
$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

# Target Rules
$(NAME): $(OBJ)
	@echo "🔨 compiling $(NAME)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "✅ $(NAME) compiled"

# Phony Targets
all: $(NAME)

clean:
	@$(rm) $(OBJ)
	@echo "✅ object files removed"

fclean: clean
	@$(rm) $(NAME)
	@echo "✅ $(NAME) removed"

re: fclean all

.PHONY: all clean fclean re
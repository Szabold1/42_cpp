# Makefile for C++ module 00 ex00

# Compiler and Flags
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Target Binary
NAME = megaphone

# File and Directory Management
rm = rm -f

# Source files
SRC = megaphone.cpp

# Object files
OBJ = $(SRC:%.cpp=%.o)

# Compilation Rules
%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

# Target Rules
$(NAME): $(OBJ)
	@echo "🔨 compiling $(NAME)"
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
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
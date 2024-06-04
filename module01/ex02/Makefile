# Makefile for C++ module 01 ex02

# Compiler and Flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Target Binary
NAME = ex02

# File and Directory Management
rm = rm -f

# Source Files
SRC = main.cpp

# Object Files
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
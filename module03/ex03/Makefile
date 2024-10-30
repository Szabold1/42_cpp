# Makefile for C++ module 03 ex03

# Compiler and Flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CPPFLAGS = -I $(INC_DIR)

# Target Binary
NAME = clap_trap_03

# File and Directory Management
rm = rm -f

# Directories
INC_DIR = ./include
SRC_DIR = ./src

# Source Files
SRC = 	ClapTrap.cpp \
		DiamondTrap.cpp \
		FragTrap.cpp \
		main.cpp \
		ScavTrap.cpp

# Object Files
OBJ = $(SRC:%.cpp=$(SRC_DIR)/%.o)

# Compilation Rules
$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
	@$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@

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
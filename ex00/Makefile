# Compiler and Flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Target executable name
TARGET = claptrap
HARD_TARGET = claptrap_hard

# Source and Object Files
SRCS = main.cpp ClapTrap.cpp
HARD_SRCS = mainHard.cpp ClapTrapHard.cpp ClapTrapRegistry.cpp

# Create an obj directory if it doesn't exist
OBJDIR = obj
$(shell mkdir -p $(OBJDIR))

# Generate object files from source files in the obj directory
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))
HARD_OBJS = $(addprefix $(OBJDIR)/, $(HARD_SRCS:.cpp=.o))

# Build Rules

all: $(TARGET)

hard: $(HARD_TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

$(HARD_TARGET): $(HARD_OBJS)
	$(CXX) $(CXXFLAGS) -o $(HARD_TARGET) $(HARD_OBJS)

# Compile source files to object files in the obj directory
$(OBJDIR)/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET) $(HARD_OBJS) $(HARD_TARGET)

fclean: clean
	rm -f $(TARGET) $(HARD_TARGET)

re: fclean all

.PHONY: all hard clean fclean re

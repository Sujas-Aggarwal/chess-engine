# Compiler and flags
CXX = g++
CXXFLAGS = -I src -Wall -Wextra -O2

# Target executable
TARGET = main.exe

# Source files and dependencies
SRC = main.cpp $(wildcard src/*.cpp)
OBJ = $(SRC:.cpp=.o)

# Default rule (first rule is executed by default)
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET) $(CXXFLAGS)

# Rule to compile .cpp files into .o files
%.o: %.cpp
	$(CXX) -c $< -o $@ $(CXXFLAGS)

# Clean up build files
clean:
	rm -f $(OBJ) $(TARGET)

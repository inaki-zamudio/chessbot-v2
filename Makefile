CXX = g++
CXXFLAGS = -Iincludes -Wall -Wextra -std=c++11
SRC = src/*.cpp
TEST = test/main.cpp
TARGET = test

all: $(TARGET)

$(TARGET): $(SRC) $(TEST)
	$(CXX) $(CXXFLAGS) $(TEST) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

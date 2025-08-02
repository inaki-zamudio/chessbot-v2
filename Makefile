CXX = g++
CXXFLAGS = -Iincludes -Wall -Wextra -std=c++11
SRC = src/tablero.cpp
TEST = test/main.cpp
TARGET = test/test_tablero

all: $(TARGET)

$(TARGET): $(SRC) $(TEST)
	$(CXX) $(CXXFLAGS) $(TEST) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

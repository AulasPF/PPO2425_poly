CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

BIN = main

SRCS = main.cpp Figure.cpp Circle.cpp Rectangle.cpp Triangle.cpp
OBJS = $(SRCS:.cpp=.o)

$(BIN): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(BIN) *.o

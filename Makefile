CXX = g++

CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic -g
CPPFLAGS = -Iinclude

TARGET = main

SOURCES = $(wildcard *.cpp)
HEADERS = $(wildcard include/*.h)
OBJECTS = $(addprefix build/,$(SOURCES:.cpp=.o))
TEMPLATES = $(wildcard include/*.tpp)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@

build/%.o: %.cpp $(HEADERS) $(TEMPLATES)
	mkdir -p build
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf build $(TARGET)
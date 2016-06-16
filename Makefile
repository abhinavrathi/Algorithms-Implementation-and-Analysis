CC=g++
CFLAGS=-c
SOURCES=main.cpp $(wildcard OrderStatistics/*.cpp) $(wildcard Searching/*.cpp) $(wildcard Sorting/*.cpp) $(wildcard Tree/*.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=run

all:$(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

cl:
	rm -f $(OBJECTS) $(EXECUTABLE)
CC=g++
CFLAGS=-c
DIRS=Searching
SOURCES=main.cpp $(wildcard $(DIRS)/*.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=run

all:$(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

cl:
	rm -f $(OBJECTS) $(EXECUTABLE)
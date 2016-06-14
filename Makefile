CC=g++
CFLAGS=-c
DIRS=Searching
SOURCES=main.cpp $(wildcard $(DIRS)/*.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=run

all:checkdir $(SOURCES) $(EXECUTABLE)

checkdir:
	@mkdir -p build

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

cl:
	rm -f $(OBJECTS) $(EXECUTABLE)
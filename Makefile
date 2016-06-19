CC=g++
CFLAGS=-c
SOURCES=main.cpp $(wildcard OrderStatistics/*.cpp) $(wildcard Problems/*.cpp) $(wildcard Searching/*.cpp) $(wildcard Sorting/*.cpp) $(wildcard Tree/*.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=run

all:$(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	@echo "Generating Executable: "$(EXECUTABLE)
	@$(CC) $(OBJECTS) -o $@

.cpp.o:
	@echo "Compiling Source Code File: "$<
	@$(CC) $(CFLAGS) $< -o $@

cl:
	@echo "Removed All Object Files & Executables!"
	@rm -f $(OBJECTS) $(EXECUTABLE)
CC = g++
CFLAGS = -Wall -Wextra -pedantic
SOURCES = $(wildcard ./src/*.cpp ./src/*/*.cpp ./src/*/**/*.cpp ./src/*/**/**/*.cpp)
OLD_SOURCES_LIST = ./src/engine/*.cpp ./src/api/*.cpp ./src/api/engine_api/*.cpp ./src/main.cpp ./src/
LIBRARIES = -lSDL2

all: veritas

veritas: src/main.cpp
	$(CC) $(CFLAGS) -o veritas $(SOURCES) $(LIBRARIES)

clean:
	rm veritas

debug: src/main.cpp
	$(CC) $(CFLAGS) -o veritas $(SOURCES) $(LIBRARIES) -g
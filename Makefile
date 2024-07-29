CC = g++
CFLAGS = -Wall -Wextra -pedantic
SOURCES = ./src/engine/*.cpp ./src/api/*.cpp ./src/main.cpp
LIBRARIES = -lSDL2

all: veritas

veritas: src/main.cpp
	$(CC) $(CFLAGS) -o veritas $(SOURCES) $(LIBRARIES)

clean:
	rm veritas

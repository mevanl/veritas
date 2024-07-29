CC = g++
CFLAGS = -Wall -Wextra -pedantic
SOURCES = src/main.cpp src/engine/sdl_error_handling.cpp
LIBRARIES = -lSDL2

all: veritas

veritas: src/main.cpp
	$(CC) $(CFLAGS) -o veritas $(SOURCES) $(LIBRARIES)

clean:
	rm veritas

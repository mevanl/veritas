# Shared 
CC = g++
CFLAGS = -Wall -Wextra -pedantic
SOURCES = $(wildcard ./src/*.cpp ./src/*/*.cpp ./src/*/**/*.cpp ./src/*/**/**/*.cpp)


# Linux 
Linux_Libraries = -l SDL2 

linux: src/main.cpp
	$(CC) $(CFLAGS) $(SOURCES) $(Linux_Libraries) -o veritas

linux-debug: src/main.cpp
	$(CC) $(CFLAGS) $(SOURCES) $(Linux_Libraries) -g -o veritas

linux-clean: 
	rm veritas


# Windows 
Windows_SDL2_Include = -I .\libs\SDL2\include
Windows_SDL2_Lib = -L .\libs\SDL2\lib
Windows_Libraries = -lmingw32 -lSDL2main -lSDL2

windows: src/main.cpp
	$(CC) $(SOURCES) $(Windows_SDL2_Include) $(Windows_SDL2_Lib) $(Windows_Libraries) -o veritas
CC = g++
CFLAGS = -Wall -Wextra -pedantic
SOURCES =  ./src/*.cpp ./src/engine/*.cpp ./src/veritas/*.cpp


# Linux
linux_libraries = -l SDL2 

linux: src/main.cpp
	$(CC) $(CFLAGS) $(SOURCES) $(linux_libraries) -o veritas
debug: src/main.cpp
	$(CC) $(CFLAGS) $(SOURCES) $(linux_libraries) -g -o veritas-debug
clean:
	rm main

# Windows 
win_sdl2_include = -I ./SDL2/include
win_sdl2_lib = -L ./SDL2/lib
win_libraries = -lmingw32 -lSDL2main -lSDL2

windows: src/main.cpp
	$(CC) $(CFLAGS) $(SOURCES) $(win_sdl2_include) $(win_sdl2_lib) $(win_libraries) -o veritas
windows-debug: src/main.cpp
	$(CC) $(CFLAGS) $(SOURCES) $(win_sdl2_include) $(win_sdl2_lib) $(win_libraries) -g -o veritas-debug
# Veritas
Veritas is a keyboard focused text editor with the primary goal of seamlessly creating a keyboard only environment. This allows users unfamiliar with this style of text editing to start using Veritas without the need to learn a completely new method of navigating their editor. 

To get started, just head to the [releases](https://github.com/mevanl/veritas/releases/) page and download the most recent version for your system.

## Building from Source
### Dependencies
* Make 
* SDL2 
 
#### Building on Linux
1. Use your package manager to install make and SDL2.
2. Clone this repository. 
3. Inside the cloned directory, run ***'make linux'*** to build.

### Building on Windows 
1. Install make and add it to the path.
2. Clone this repository. 
3. Download and extract the latest SDL2-devel for mingw from the official [SDL2 repository](https://github.com/libsdl-org/SDL/releases).
4.  Inside the extracted directory, copy the ***'x86_64-w64-mingw32'*** directory to the ***'veritas/libs'*** directory (Create the libs directory if it does not exist).
5. Rename ***'x86_64-w64-mingw32'*** to ***'SDL2'*** 
6. Enter the ***'SDL2/bin'*** directory and copy the ***'SDL2.dll'*** file.
7. Paste this file in the main Veritas directory (where the Makefile is located).
8. Run ***'make windows'*** .

bin: output executables

build: contains all object files, and is removed on a clean.

doc: documentation

include: project header files as well as all necessary third-party header files that do not exist under /usr/local/include are also placed here.

lib: libs that get compiled by the project, third party or any needed in development.

src: application source files.

test: test code

To compile the program ` g++ -o geometric_utils main.cpp src/geometric_utils.cpp -I include -std=c++11`
CPP:=g++
CPPFLAGS:=-Wall -Wextra -Werror
TARGET:=myprogram

all: main

main: main.cpp
	$(CPP) $(CPPFLAGS) main.cpp -o main

clean:
	rm -f main

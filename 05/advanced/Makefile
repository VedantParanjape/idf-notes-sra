.PHONY = clean

main: library.o main.o
		@echo "linking main.o and library.o and generating binary"
		gcc -o library library.o main.o

library.o: library.c
		@echo "compiling library.c into .object file"
		gcc -c library.c

main.o: main.c
		@echo "compiling main.c into .object file"
		gcc -c main.c

clean: 
		@echo "cleaning build files"
		rm main.o library.o library
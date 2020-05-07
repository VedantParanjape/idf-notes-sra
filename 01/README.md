# header files

* As we all know that files with .h extension are called header files in C. These header files generally contain function declarations which we can be used in our main C program, like for e.g. there is need to include stdio.h in our C program to use function printf() in the program.

**header files are simply files in which you can declare your own functions that you can use in your main program or these can be used while writing large C programs.**

* .h or header files have function declarations only or macro definition.
* .c or source file contain definition of the functions declared in .h files.

* we do this to break our program into small parts, makes it easy to maintain and find bugs, for example in a library management app, we would put all the data storage functions in one header file and display functions in another, as they both have different tasks. Breaks the program into logical CHUNKS.
* whatever we define in .h files, and then if we include it in main.c only things defined there are visible globally, if define a variable in a .c file, we cannot see the variable in main.c
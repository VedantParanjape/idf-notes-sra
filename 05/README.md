# make and Makefile

detailed tutorial: https://opensource.com/article/18/8/what-how-makefile

* **Make** is a build automation tool that automatically builds executable programs and libraries from source code by reading files called Make files which specify how to derive the target program.
* A **makefile** is a special file, containing shell commands, that you create and name it as makefile (or Makefile depending upon the system). These rules tell the system what commands you want to be executed. Most times, these rules are commands to compile(or recompile) a series of files
* We define rules about what how make should generate bash commands to execute required functionality

* below is the syntax of a typical rule:

```Makefile
target: prerequisites
<TAB> recipe
```
* target is just a name of the task, prerequisites is the files or anything necessary to complete that task, recipe is the actual process that must be executed to complete the task, it contains the actual command line commands. recipe is printed as well as executed, so add a @ before the command to suppress it

* Basic Example: Just prints hello world
```Makefile
say_hello:
        echo "Hello World"
```
command will not be displayed
```Makefile
say_hello:
        @echo "Hello World"
```

* As an example, a target might be a binary file that depends on prerequisites (source files). On the other hand, a prerequisite can also be a target that depends on other dependencies, as we saw if we use multiple .c file we need to generate the corresponding .o files to generate the binary.
* If multiple rules in a makefile, first one is the default one and executed on calling `make`
* theres's a thing called phony targets, Good examples for this are the common targets "clean" and "all". Chances are this isn't the case, but you may potentially have a file named clean in your main directory. In such a case Make will be confused because by default the clean target would be associated with this file and Make will only run it when the file doesn't appear to be up-to-date with regards to its dependencies. remember we do `make clean` or `make flash` in esp idf. these are different targets. we use `.PHONY = <name of target>` to declare phony tasks
* let's write a makefile to compile the code in 01

```Makefile
.PHONY = clean
```
Added the clean task as a phony task
```Makefile
main: library main
		@echo "linking main.o and library.o and generating binary"
		gcc -o library library.o main.o
```
main is the task name, and it is the default task. library and main are prerequisite tasks, need to be run before we can run this task. Since generating a binary needs .o files, so it will call the respective tasks which will generate .o files for the given .c files.
```Makefile
library: library.c
		@echo "compiling library.c into .object file"
		gcc -c library.c
```
```Makefile
main: main.c
		@echo "compiling main.c into .object file"
		gcc -c main.c
```
library and main tasks generates .o files, as we can see the command is `gcc -c main.c`
```Makefile
clean: 
		@echo "cleaning build files"
		rm main.o library.o library
```
This task is called by `make clean` and cleans all the generated .o and binary files
* So now we can see library.o main.o and library files are generated only on executing `make` 
* Make is more of a general tool, but not specifically for any language, next we see CMake, which is more C++ agnostic, it has certain very useful features.
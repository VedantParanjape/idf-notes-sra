# .c and .o files

* we learnt about .c and .h files, so what are .o files ??
* .o file means `object file`, Contains the compiled contents of the corresponding .c program, compiled as in assembly form.
* Lets take example of `01`, command to compile was `gcc main.c library.c`, this was as we need to combine function in library.c and main.c for the program to run, if we only compile main.c, there's only declaration of `welcome_user`, but a definiton is missing, i.e. compiler doesnot know what it needs to do when `welcome_user` function is called. So we need to link these to files together. `gcc main.c library.c` automatically does that for us.
* Other way to do this is compile the respective .c files in its object file and then link them together.

* Example: `gcc -c main.c` you will see a main.o file, it contains compiled contents of main.c, open it you will see gibberish
* `gcc -c library.c` you will see library.o file, again gibberish
* Now, these two .o files contain functions compiled in binary form, we need them to link together for them to work so we link them. we call this process linking
* `gcc -o main main.o library.o` now we can see we passed both the .o files to the compiler, it merged them and formed a single binary, same process take place even for 1000s of files.
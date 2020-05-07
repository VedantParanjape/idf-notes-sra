# how to compile with gcc

* as we can see if we have multiple .c files we need to pass all the .c files to the compiler, we even know the reason
* But if we were working on a big project, like [https://github.com/espressif/esp-idf/tree/master/components/esp32](https://github.com/espressif/esp-idf/tree/master/components/esp32), there are more than 10 .c files, do you think it is feasible to write the 10 files in the gcc command like this: `gcc t1.c t2.c t3.c .... so on` NOOO !!! so we use automated tools to make this easy for us. They are make and cmake.
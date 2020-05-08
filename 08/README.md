# How to create a component

Bareminimum things needed in a component

```
mycomponent
           CMakeLists.txt
           component.mk
           source_file.c
           source_file.h
```
* CMakeLists.txt contains CMake commands to include the given component in a esp idf app
* component.mk tells esp idf that this is a component.mk
* source_file.c/h are required source files

# 
* A component is any directory in the COMPONENT_DIRS list which contains a CMakeLists.txt file. `COMPONENT_DIRS = /esp/esp-idf/components/`
* never change the `esp/esp-idf/components`, **never** add any external components to this, these are important components which are necessary for your basic app to run. Inshort, don't change anything inside `esp/esp-idf/`
* The list of directories in COMPONENT_DIRS is searched for the project’s components. Directories in this list can either be components themselves (ie they contain a CMakeLists.txt file), or they can be top-level directories whose sub-directories are components.
* The minimal component CMakeLists.txt file simply registers the component to the build system using idf_component_register:
```C
idf_component_register(SRCS "foo.c" "bar.c"
                       INCLUDE_DIRS "include"
                       REQUIRES mbedtls)
```
* `SRCS` is a list of source files (*.c, *.cpp, *.cc, *.S). These source files will be compiled into the component library.
* `INCLUDE_DIRS` is a list of directories to add to the global include search path for any component which requires this component, and also the main source files.
* `REQUIRES` is not actually required, but it is very often required to declare what other components this component will use. See Component Requirements.

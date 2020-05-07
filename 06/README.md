# CMake
CMake is an extensible, open-source system that manages the build process in an operating system and in a compiler-independent manner. 

* CMake is much more high-level. It's tailored to compile C++, for which you write much less build code, but can be also used for general purpose build. make has some built-in C/C++ rules as well, but they are mostly useless.

* CMake does a two-step build: it generates a low-level build script in ninja or make or many other generators, and then you run it. All the shell script pieces that are normally piled into Makefile are only executed at the generation stage. Thus, CMake build can be orders of magnitude faster.

* The grammar of CMake is much easier to support for external tools than make's.

[Content](https://tuannguyen68.gitbooks.io/learning-cmake-a-beginner-s-guide/content/chap1/chap1.html)

Well Cmake is a build system generator which is used to generate projects over different platforms whether its be Linux, MacOS or Windows. Cmake is known as build system generator because it can generate projects using different available compilers like GCC , Clang and MSVC. CMake is able to do so because it has its own domain specific language (DSL) which allows us to generate platform-native build systems with the same set of CMake scripts. CMake scripts are always written in a file named as CMakeLists.txt . The CMake software toolset gives developers full control over the whole life cycle of a given project:

* CMake let’s you describe how your project, whether building an executable, libraries, or both, has to be configured, built, and installed on all major hardware and operating systems.
* CTest allows you to define tests, test suites, and set how they should be executed.
* CPack offers a DSL for all your packaging needs, whether your project should be bundled and distributed in source code or platform-native binary form.
* CDash will be useful for reporting the results of tests for your project to an online dashboard.
# Macros

* macros are very important tools in C/C++
* Consider them to be simple copy paste utility.
* Well, macros are a text processing feature. What happens once you build your program is that all occurrences of macros are “expanded” and replaced by the macro definitions.
* we define macro using `#define <identifier> <value or function definition>`
* So, what happens is, say we have `#define maxvalue 3`, so if in my code, I write maxvalue anywhere, it will be simply replaced by the value, so in this case `3`

```C
#include <stdio.h>

#define AGE 23

int main(int argc, char *argv[])
{
	printf("%d\n", AGE);
}
```

So, it is as good as writing:
```C
#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("%d\n", 23);
}
```
23 got copied in place of AGE. below is a example of a function

```C
#include <stdio.h>

#define SUM(x, y) (x + y)

int main(int argc, char *argv[])
{
	int a = 5;
	int b = 10;
	int sum = SUM(a, b);
	printf("%d\n", sum);
}
```
So, it is as good as writing:
```C
#include <stdio.h>

int main(int argc, char *argv[])
{
	int a = 5;
	int b = 10;
	int sum = (a + b);
	printf("%d\n", sum);
}
```

* to see this in action we can pass `-E` option to the gcc compiler, it will output the processed file.
* Can someone predict the output of `main.c`.
* Now run the command `gcc -E main.c -o main_processed.c` check the newly created file, ignore large list of extra lines add, go to the bottom. We can see SUM and AGE have been replaced by their values.
* Using macros can be extremely unsafe and they hide a lot of pitfalls which are very hard to find. However, as a C or C++ programmer, inevitably, you will encounter macros in your coding life. Even if you don’t use them in your own project, there is a high chance you will encounter them somewhere else, such as a library.
#include <stdio.h>
#include <stdlib.h>
#include "library.h"
#include "string_add.h"

int main()
{
    char name[20];

    printf("what is your name: ");
    scanf("%s", name);

    welcome_user(name);

    char str1[20], str2[20];

    printf("enter two strings to combine: ");
    scanf("%s%s", str1, str2);
    printf("combined string: %s\n", string_add(str1, str2));

    return 0;
}
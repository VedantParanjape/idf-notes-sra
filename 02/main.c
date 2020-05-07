#include <stdio.h>
#include <stdlib.h>
#include "library.h"

int main()
{
    char name[20];

    printf("what is your name: ");
    scanf("%s", name);

    welcome_user(name);

    return 0;
}
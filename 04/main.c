#include <stdio.h>

#define AGE 23
#define SUM(x, y) (x + y)

int main()
{
	int a = 5;
	int b = 10;
	int sum = SUM(a, b);
	printf("%d\n", sum);

    int age_input = 0;
    
    printf("enter your age: ");
    scanf("%d", &age_input);
    
    if (age_input > AGE)
    {
        printf("you are elder than me\n");
    }
    else
    {
        printf("you are younger than me\n");
    }

    return 0;
}

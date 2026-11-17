#include <stdio.h>

int main()
{
    int num;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial = %d", factorial);

    return 0;
}

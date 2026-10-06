#include <stdio.h>

unsigned char mod(unsigned char r)
{
    r = r | (1 << 2);
    r = r & ~(1 << 5);
    r = r ^ (1 << 0);

    return r;
}

int main()
{
    unsigned char r;

    printf("Enter value: ");
    scanf("%u", &r);

    r = mod(r);

    printf("Modified value = %u", r);

    return 0;
}
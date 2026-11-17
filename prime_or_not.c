#include <stdio.h>
int main()
{
    int num;
    printf("enter the num");
    scanf("%d",&num);
    for(int i=2;i<num;i++)
    {
        if(num%i==0){
        printf("the num is not prime");
    }
        else{
        printf("the number is prime");
    }
    return 0;
    }
}

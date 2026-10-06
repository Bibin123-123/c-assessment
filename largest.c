#include <stdio.h>

int secondlarge(int arr[], int n)
{
    int largest, second;

    if (arr[0] > arr[1])
    {
        largest = arr[0];
        second = arr[1];
    }
    else
    {
        largest = arr[1];
        second = arr[0];
    }

    int i;

    for (i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second)
        {
            second = arr[i];
        }
    }

    return second;
}

int main()
{
    int arr[100];
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Second largest is %d", secondlarge(arr, n));

    return 0;
}
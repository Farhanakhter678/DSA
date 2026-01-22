#include <stdio.h>

int main()
{
    // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr[10];
    printf("Enter 10 elements of array");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",  &arr[i]);
    }

    int average = 0;
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        average += arr[i];
    }

    average /= 10;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > average)
        {
            sum += arr[i];
        }
    }

    printf("%d", sum);
    return 0;
}

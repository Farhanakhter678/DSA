#include <stdio.h>
int main()
{

    int arr[6] = {10, 30, 20, 40, 60, 50};
    int i = 0;

    while (i < 6)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
            i++;
        }
        else
        {
            i++;
        }
    }
        printf("Sorted Array\n");

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}














































// printf("Enter the number of elements\n");
    // int n;
    // scanf("%d", &n);
    // int arr[n];
    // printf("Enter the elements\n");

    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
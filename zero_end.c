#include <stdio.h>
int main()
{

    int arr[8] = {1, 0, 5, 3, 7, 0, 0, 8};
    int i = 0;
    int count = 0;

    while (i < 8)
    {
        if (arr[i] != 0)
        {
            count++;
            i++;
        }
        else
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count = i;
        }
    }
    printf("Sorted Array\n");

    for (int i = 0; i < 8; i++)
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
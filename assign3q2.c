#include <stdio.h>

int Binary(int arr[], int x, int key)
{
}

void insertion(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[5] = {45, 56, 78, 98, 0};
    insertion(arr, sizeof(arr) / sizeof(arr[0]));
    printf("%d\t", arr[0]);
    printf("%d\t", arr[1]);
    printf("%d\t", arr[2]);
    printf("%d\t", arr[3]);
    printf("%d\t", arr[4]);

    return 0;
}
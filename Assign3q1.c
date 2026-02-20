#include <stdio.h>

void merge(int arr[], int l, int mid, int r)
{
    int m = mid - l + 1;
    int n = r - mid;

    int L[m], P[n];

    for (int i = 0; i < m; i++)
    {
        L[i] = arr[l + i];   
    }

    for (int j = 0; j < n; j++)
    {
        P[j] = arr[mid + 1 + j];   
    }

    int i = 0, j = 0, k = l;

    while (i < m && j < n)
    {
        if (L[i] <= P[j])
        {
            arr[k] = L[i];   
            i++;
        }
        else
        {
            arr[k] = P[j];
            j++;
        }
        k++;
    }

    while (i < m)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n)
    {
        arr[k] = P[j];   
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;

        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[5] = {9, 3, 3, 5, 6};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0, arr_size - 1);

    for (int i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
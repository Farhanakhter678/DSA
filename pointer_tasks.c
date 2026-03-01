#include <stdio.h>
#include<stdlib.h>
#define s 100

    int *input_array(int *arr, int *len)
    {
        printf("Enter number of elements: ");
        scanf("%d", len);

        printf("Enter elements:\n");
        int count =0;
        for (int i = 0; i < *len; i++)
        {
                int k;
                scanf("%d",&k);
            if (k>=0)
            {
                arr[i]=k;
                count++;
            }else
                break;
        }
        *len=count;
        return arr;
    }

    int *reverse_array(int *arr, int *len)
{
    int i = 0;
    int n = *len;
    while (i<n/2)
    {
        int temp = arr[n-(i+1)];
        arr[n-(i+1)]=arr[i];
        arr[i]=temp;
        i++;
    }
    return arr;
}


int check_duplicate(int *arr, int *len)
{
    for (int i = 0; i < *len-1; i++)
    {
        for (int j = i+1; j < *len; j++)
        {
            if(arr[i]==arr[j]){
                return 0;
            }
        }
        
    }

    return 1;
    
}


int main()
{
    int length, array[s], *base, unique;
    printf("Max size of array is 100\n");
    printf("Enter elements of array and enter a negative number if you want to stop entering element\n");
    base = input_array(array,&length);
    printf("ELements of array are: \n");
   for (int i = 0; i < length; i++)
   {
    printf("%d\n",array[i]);
   }
   

    base= reverse_array(base,&length);
    printf("Reversed array :\n");
    for (int i = 0; i < length; i++)
   {
    printf("%d\n",array[i]);
   }

    // printf("Heloo");
    unique = check_duplicate(array,&length);

    if (unique==0)
    {
        printf("Duplicate elements is/are present in the array");
    }else{
        printf("No duplicate elements in the array ");
    }
    
    return 0;
}


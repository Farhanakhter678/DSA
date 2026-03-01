#include <stdio.h>
int main()
{
    int arr[7] = {10, 3, 40, 20, 50, 80, 70};
    int start = 0;
    int end = 7;
    int key =80 ;
    int count=0;
    int index;
    while (start < end)
    {
        int mid = (start+end)/ 2;
        count++;
        if(key==arr[mid]){
            index = mid;

            break;
        }else if(key>arr[mid]){
            if(key==arr[mid-1]){
                index=mid-1;
                break;
            }else{
                start=mid+1;
            }
        }else{
            if(key==arr[mid+1]){
                index=mid+1;
                break;
            }else{
                end=mid-1;
            }
        }
    }

    printf("%d",index);
    return 0;
}
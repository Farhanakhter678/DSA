#include<stdio.h>
#include<stdlib.h>
int main(){

int n;

printf("Enter the size of the array\n");

scanf("%d",&n);

int *arr = ((int*) malloc(n*sizeof(int)));

printf("Enter the %d Elements of array\n",n);

for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}

printf("Enter an a key\n");

int key;

scanf("%d",&key);
int i =0;
while(i<n){
    if(arr[i]==key){
        printf("Key found at index %d",i);
        break;
    }else{
        i++;
        if(i==n-1){
            printf("Key not found");
        }
    }

}


// printf("%d",arr[0]);
return 0;


}
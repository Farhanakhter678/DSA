#include <stdio.h>
#include <stdlib.h>
int main()
{

    FILE *fptr;

    fptr = fopen("file.txt", "r");

    char data[50] = "GeeksforGeeks-A Computer "
                    "Science Portal for Geeks";

    if (fptr == NULL)
    {
        printf("The file is not opened");
    }
    else
    {
        printf("The file is not opened");
        fputs(data,fptr);
        fputs("\n",fptr);
    

      fclose(fptr);
        printf("Data successfully written in file "
               "file.txt\n");
        printf("The file is now closed.");
    }

    return 0;
}
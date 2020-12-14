//Reverse an unsized integer array with pointers
#include <stdio.h>
#include <stdlib.h> //To use malloc function we should add that library.

int main(void)
{
    int n;
    scanf("%d",&n); //How many integer do you want to enter?Answer is n.
    int *array = (int*)malloc(n * sizeof(n)); //With malloc function,you can expand size of the array or pointer.
    for(int i=0; i<n; i++)  //For n times,get integer from user and store is in array pointer.
        scanf("%d",array+i);
    for(int ncpy=n-1; ncpy>=0; ncpy--) //Print pointer named "array" in reverse
        printf("%d ",*(array+ncpy));
    printf("\n");
    free(array);  //Due to you use malloc function,you should free rest of the memory didn't used.
}


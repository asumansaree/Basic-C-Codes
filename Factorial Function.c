#include <stdio.h>


int main()
{
    int n,ncpy,result=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    ncpy = n;
    while(ncpy != 0)
    {
        result = result * ncpy;
        ncpy--;
    }
    printf("%d!= %d",n,result);
    printf("\n");
}


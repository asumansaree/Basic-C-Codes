#include <stdio.h>

int fact(int x);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d! is: %d\n",n,fact(n));
}
int fact(int x)
{
    if(x==0)
        return 1;
    else if(x==1)
        return 1;
    else
        return x*fact(x-1);
}


//Printing fibonacci sequence and it's nth term 
#include <stdio.h>

int fib(int x);
int main()
{
    int n;
    printf("Enter a number: "); //We're asking user that until what number program should print
    scanf("%d",&n);
    printf("%dth term of fibonacci sequence is: %d\n",n,fib(n)); //We will send this n value to fib function and we will print nth term
    for(int i=1;i<=n;i++)  //Also we can print until nth element by sending i values to fib function
        printf("%d ",fib(i));
    printf("\n");

}
int fib(int x)  //Here is the recursion part.
{
    int first=0,second=1,temp;  //first and second terms of fibonacci sequence is out of rules,so we should determine them 
    if(x>0) //If user enters 0,we will not print anything
    {
        if(x==1)
            return first;
        else if(x==2)
            return second;
        else        
            return fib(x-1)+fib(x-2);  //If n>2,for every value until 2,function will call itself 
    }
    else
        return 0;
}
/*
Mathemathical explaination
Rule of Fibonacci Sequence:Each term except the 1st and 2nd terms is the sum of the two terms before it.
If user enters 5,this means 
0 1 (0+1) = 0 1 1
0 1 1 (1+1) = 0 1 1 2
0 1 1 2 (2+1) = 0 1 1 2 3
5th term is 5 and 5 value of sequence is 0 1 1 2 3 
*/


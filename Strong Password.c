                        //SAFE PASSWORD OR NOT
/*
Your program must determine if a given string would be a safe password. Here, a password is considered safe if:
It contains at least 8 characters.
It contains at least 1 digit (0-9).
It contains at least 1 lowercase letter (a-z).
It contains at least 1 uppercase letter (A-Z).
*/
#include <stdio.h>
#include <string.h>
int isNumber(char *A); //Declaration of functions we should take as a parameter
int isLowercase(char *A);
int isUppercase(char *A);
int a=1,size,flag;
int main()
{
    char S[100];
    scanf("%[^\n]", S);
    size = strlen(S);
    if(size < 8)
    {
        printf("invalid\n"); //If password has less than 8 digit,it is invalid
        return 0;
    }
    for(int i=0; i<size; i++)
        flag = (isNumber(S) + isUppercase(S) + isLowercase(S)) == 0 ? 1 : 0; //Even one time this conditions satisfy,a value will be 0 so if total is 0,password is valid
    flag == 1 ? printf("valid\n") : printf("invalid\n");
}

int isNumber(char *A)
{
    for(int i=0; i<size; i++)
    {
        if((48 <= A[i] ) && (A[i] <= 57))
        {
            a = 0; //Condition wants us 1 number is enough.While we found 1 number,we return a as 0
            return a;
        }
    }
    return a;
}
int isUppercase(char *A)
{
    for(int i=0; i<size; i++)
    {
        if((65 <= A[i] || A[i] <= 90))
        {
            a = 0; //Condition wants us 1 uppercase is enough.While we found 1 uppercase,we return a as 0
            return a;
        }
    }
    return a;
}
int isLowercase(char *A)
{
    for(int i=0; i<size; i++)
    {
        if((97 <= A[i] || A[i] <= 122))
        {
            a = 0; //Condition wants us 1 lowercase is enough.While we found 1 lowercase,we return a as 0
            return a;
        }
    }
    return a;
}




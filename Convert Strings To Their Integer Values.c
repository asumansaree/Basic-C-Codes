//C program to calculate whether sum of integers as string are odd or even (One of the www.codingame.com challanges)
/*Example:
Input: Two Hundred Twenty Four and Seven
Output: Odd
(Sum of 224+7 is odd) */
#include <stdio.h>
#include <string.h>
//To determine whether sum of ints are odd or even,it's enough to look at just last digits.
//For our example,if we know the strings previous and next of the "and" word,we can learn result is odd or even.

char *numbers[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

int main()
{
    char str[10][10];
    char arr[] = "and";
    char str1[5];
    int i=0,num1,num2;
    scanf("%s",str[i]);  //My aim is store all the strings in an array until I find "and" word.Storing is not important,you can update just one variable,too.
    while(strncmp(str[i], arr, 3) != 0) //strncpm is a function in string.h and if it returns 0,that means two strings you send as parameter are equal.
    {
        i++;
        scanf("%s",str[i]);     //Our last string will be "and",so previous word will be str[i-1] and we will store it in char *value.
    }
    char *value = str[i-1];
    int n=strlen(value);
    scanf(" %s",str1);  //First string after "and" is storing in char *str1.
    int n1=strlen(str1);
    for(i=0; i<10; i++)
    {
        if(strncmp(numbers[i], value, n) == 0 )  //In here,we're assigning indexs as their means of integer.Like "Five" word's index is 5,it's integer value.
            num1=i;
        if(strncmp(numbers[i], str1, n1) == 0 )
            num2=i;
    }
    (num1+num2) % 2 == 0 ? printf("Even\n") : printf("Odd\n"); //Ternary operator just provide us shorter if statement,it is same with if((num1+num2) % 2 == 0) and so on.
    
    return 0;
}

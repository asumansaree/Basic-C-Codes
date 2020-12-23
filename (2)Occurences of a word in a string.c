//C Program to find Occurences of a word in a string 
//This is another version of same problem to people don't want to use strncpm function,I've create a function
#include <stdio.h>
#include <string.h>
int howMany(char array[20][20],char arr[20]);
int i, j = 0, k = 0, x, len;
int main()
{
    
    char str[100], str1[20][20], temp,word[20];
    printf("Enter the string: ");
    scanf("%[^\n]s", str); //We're taking all text as just one string(including spaces)
    printf("Which word do you want to search? ");
    scanf("%s",word);
 
// In here,We're dividing one string into words after they come across with space,dot or comma. 
    for (i = 0;str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str1[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            str1[k][j]=str[i];
            j++;
        }
    }
    str1[k][j] = '\0';
    printf("Occurences of %s in this string is: %d\n",word,howMany(str1,word));  
}
int howMany(char array[20][20],char arr[20])
{
    int amount=0,jcopy=0,temp;
    int n = strlen(arr);
    for(i=0; i<=k; i++)
    {
        temp=0;
        for(j=0; j<n; j++)
        {
            if(array[i][j] == arr[j])
                temp++;   
        }
        if(temp==strlen(arr) && strlen(arr) == strlen(array[i]))
            amount++;      
    }
    return amount;
}



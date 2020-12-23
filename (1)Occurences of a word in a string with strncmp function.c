//C Program to find Occurences of a word in a string with strncmp function
#include <stdio.h>
#include <string.h>
int i, j = 0, k = 0,amount=0;
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
        if (str[i] == ' ' || str[i] == '.' || str[i] == ',')
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
/*After this,we have a 2D array like that
Given string:Hello everyone.Today is a good day.
2D array:
Hello
everyone
Today
is
a
good
day

*/
    for(i=0; i<=k; i++)
    {
        int word_len = strlen(str1[i]);
        //If you want a better seen,you can activate comment lines below
        //printf("%dth word is = %s\n",i,str1[i]);
        //printf("strncmp(str1[%d], word, word_len) is = %d\n",i,strncmp(str1[i], word, word_len));
        if(strncmp(str1[i], word, word_len) == 0 && word_len == strlen(word))
            amount++;
    }
    printf("Occurences of %s in this string is: %d\n",word,amount);  
}



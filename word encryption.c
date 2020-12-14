#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char word[101];
    scanf("%[^\n]", word);
    int i = strlen(word);
    for(; i>0; i--)
    {
        word[i-1] = '*';
        printf("%s\n",word);        
    }
/*
bing*
bin**
bi***
b****
*****
*/
}


#include "stdio.h"

int main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    char string[81];
    char words[100][50];
    gets(string);
    while(string[i] != '\0'){
        if(string[i] != ' ')
            words[j][k++] = string[i];
        else{
            words[j][k] = '\0';
            k = 0;
            j++;
        }
        i++;
    }
    for(i = j; i >= 1; i--){
        for(k = 0; words[i][k] != '\0'; k++)
            printf("%c",words[i][k]);
        printf(" ");
    }
    puts(words[0]);
    return 0;
}

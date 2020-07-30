#include <stdio.h>
#include<string.h>
#define SIZE 500

int main()
{
    char word[SIZE],ins[SIZE];
    int pos;
    int shift;
    scanf("%s",word);
    scanf("%s",ins);
    scanf("%d",&pos);
    for(int index = 0; ins[index]; index++)
    {
        for(shift=strlen(word)-1;shift>=pos + index ;shift--)
        {
            word[strlen(word)+1] = '\0';
            word[shift+1] = word[shift];
        }
        word[shift+1] = ins[index];
    }
    
    printf("%s",word);
    return 0;
}

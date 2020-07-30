#include <stdio.h> 
#include <stdlib.h> 
#include<time.h> 
/* main(void) 
{    
    int val; 
    int flag=0;
    int num; 
    printf("\n");
    for(int i=0;i<8;i++)
    {
        scanf("%d",&num);
        srand(time(0)); 
        val = rand();
        val = val%10;
        printf("%d",val);
        if(num>val)
        {
            printf("\nHIGH\n");
        }
        else if(num<val)
        {
            printf("\nLOW\n");
        }
        printf("\n");
        if(val==num)
        {
            printf("\n BARVO !!!!!!!!!! YOU WON  :)");
            flag = 1;
            break;
        }
    }
    return 0; 
} */


////////////////GAME FOR SINGLE NUMBER

/*int main(void) 
{    
    int val; 
    int flag=0;
    int num; 
    srand(time(0)); 
    val = rand();
    val = val%10;
    printf("\n");
    printf("%d",val);
    for(int i=0;i<8;i++)
    {
        scanf("%d",&num);
        if(num>val)
        {
            printf("\nHIGH\n");
        }
        else if(num<val)
        {
            printf("\nLOW\n");
        }
        printf("\n");
        if(val==num)
        {
            printf("\n BARVO !!!!!!!!!! YOU WON  :)");
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("\n YOU LOSE!!!!!\n");
    }
    return 0; 
} */



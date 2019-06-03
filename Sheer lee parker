#include<stdio.h>

int main()
{
    int no_of_bottles;
    scanf("%d",&no_of_bottles);
    int k,i,j,consume;
    int consume_litter[no_of_bottles];
    int consume_ctr = 0;
    int temp=0;
    int litter[no_of_bottles];
    int sum_calculator=0;
    for(i=0;i<no_of_bottles;i++)
    {
        scanf("%d",&litter[i]);
    }
    scanf("%d",&consume);
    for(j=0;j<no_of_bottles;j++)
    {
        if(litter[j] < consume)
        {
            consume_litter[consume_ctr++] = litter[j];
        }
    }
    for(k=0;k<consume_ctr;k++)
    {
        for(int l=k+1;l<consume_ctr;l++)
        {
            for(int m=l+1;m<consume_ctr;m++)
            {
                if(consume_litter[k]+consume_litter[l] + consume_litter[m] == consume)
                {
                    temp = 1;
                    printf("%d %d %d",consume_litter[k],consume_litter[l],consume_litter[m]);
                    printf("\n");
                   /* consume_litter[k] = consume_litter[l] = consume_litter[m] = 0;*/
                }
                
            }
        } 
    }
    if(temp == 1)printf("\nTRUE");
    else printf("\nFALSE");
}

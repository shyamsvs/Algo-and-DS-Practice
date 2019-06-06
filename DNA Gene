#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#define SIZE 100
int tot[100];
int tot_cnt=0;
struct DNA
{
    char name[10];
    int val;
}dna[SIZE];
struct strand
{
    int start;
    int end;
    char dn[10];
}str[SIZE];

int main()
{
    int num;
    int strands;
    int i,j,k,l;
    int values=0;
    int max = INT_MIN;
    int min = INT_MAX;
    int temp1;
    int temp2;
    int ct=0;
    char *a;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%s",dna[i].name);
    }
    for(l=0;l<num;l++)
    {
        scanf("%d",&dna[l].val);
    }
    scanf("%d",&strands);
    for(j=0;j<strands;j++)
    {
        scanf("%d %d %s",&str[j].start,&str[j].end,str[j].dn);
    }
    /*for(i=0;i<num;i++)
    {
        printf("%s - %d",dna[i].name,dna[i].val);
        printf("\n");
    }
    for(i=0;i<strands;i++)
    {
        printf("%d - %d - %s",str[i].start,str[i].end,str[i].dn);
        printf("\n");
    }*/

    for(i=0;i<strands;i++)
    {
        values=0;
        for(k=0;k<strlen(str[i].dn);k++)
        {
            for(j=str[i].start;j<=str[i].end;j++)
            {
                a=(char*)malloc(strlen(dna[j].name)*sizeof(char));
                for(int m=0;m<strlen(dna[j].name);m++){
                    a[m]=str[i].dn[m+k];
                //printf("%s - %s - %d\n",a,dna[j].name,strcmp(a,dna[j].name));
                
                if(strcmp(a,dna[j].name) == 0)
                {
                    //printf("true\n");
                    values = values + dna[j].val;
                }
                //printf("%c  - %c \n",str[i].dn[k],dna[j].name[0]);
            }
            free(a);
        }
    }
    ///printf("%d \n",values);
    tot[tot_cnt++] = values;
    }
    
    for(i=0;i<tot_cnt;i++)
    {
        if(tot[i]>max)
        max=tot[i];
        if(tot[i]<min)
        min=tot[i];
    }
    printf("%d %d",min,max);
    return 0;
}

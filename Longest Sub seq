#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define SIZE MAX_INT
int digctr[10] = {};

int check(int number)
{
    int ctr=0;
    int digarr[100];
    while(number)
    {
        digarr[ctr++] = number%10;
        number = number/10;
    }
    for(int i=0;;i++)
    {

    }


}

int main()

{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int temp;
        int num;
        int *ele;
        int flag;
        scanf("%d",&num);
        ele = (int *)malloc(num * sizeof(int));
        for(int i=0;i<num;i++)
        {
            scanf("%d",&ele[num]);
        }
        for(int i=0;i<num-1;i++)
        {
            for(int j=i+1;j<num;j++)
            {
                if(ele[i]>ele[j])
                {
                    temp = ele[i];
                    ele[i] = ele[j];
                    ele[j] = temp; 
                }
            }
        }
        for(int i=num-1;i>=0;i--)
        {
            flag = check(ele[i]);
        }
    }
    return 0;
}

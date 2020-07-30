#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

struct boat
{
    int row,col;
}bt[SIZE];


int check(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                return 1;
            }
        }
    }
    return 0;
}


int main()
{
    int rows;
    int cols;
    int no_of_boat;
    int count=0;
    int sum[10] = {0};
    printf("\n Enter no of rows and no of cols : ");
    scanf("%d %d",&rows,&cols);
    int sea[rows][cols];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            sea[i][j] = 0;
        }
    }
    printf("\n Enter no boats : ");
    scanf("%d",&no_of_boat);
    printf("Enter boat position");
    printf("\n");
    for(int i=0;i<no_of_boat;i++)
    {
        scanf("%d %d",&bt[i].row,&bt[i].col);
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            for(int b=0;b<no_of_boat;b++)
            {
                sum[b] = abs(bt[b].row - i) + abs(bt[b].col - j);
            }
            if(check(sum,no_of_boat))
            {
                sea[i][j] = 1;
            }
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(sea[i][j] == 1)
            {
                count++;
            }
        }
    }
    printf("\n %d",count);
    return 0;


}

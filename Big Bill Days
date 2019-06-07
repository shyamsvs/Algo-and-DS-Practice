#include<stdio.h>
#include<stdlib.h>

int main()
{
    int total_items,type;
	int *items;
	int count=0;
    scanf("%d",&total_items);
	scanf("%d",&type);
    items = (int *)malloc(total_items * sizeof(int));
    for(int i=0;i<total_items;i++)
    {
        scanf("%d",&items[i]);
    }
	printf("came here");
	for(int i=0;i<total_items-1;i++)
	{
		for(int j=i+1;j<total_items;j++)
		{
			if(items[i] == items[j] && (i-j)==1)
			{
				continue;
			}
			if(items[i] == items[j])
			{
				count++;
			}
		}
	}
	printf("%d",count);
    return 0;
}

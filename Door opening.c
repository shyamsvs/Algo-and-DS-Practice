
#include <stdio.h>
#define MAX 100
int main(void) 
{
int doors[MAX]={0} , ind , ind1;
for(ind=1 ; ind<=MAX ; ind++)
{
for(ind1=ind-1 ; ind1<MAX ; ind1=ind1+ind)
{
if(doors[ind1]==0)
doors[ind1]=1;
else
doors[ind1]=0;
}
}
printf("Opened:\n");
for(ind=0 ; ind<MAX ; ind++)
{
if(doors[ind]==1)
printf("%d\t",ind+1);
}
printf("\nclosed:\n");
for(ind=0 ; ind<MAX ; ind++)
{
if(doors[ind]==0)
printf("%d\t",ind+1);
}
return 0;
}

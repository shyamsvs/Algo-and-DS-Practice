#include <stdio.h>
#include<string.h>
int per(int i)
{
    if(i==0)
       return 1;
    else
       return i * per(i-1);
}
int main(void)
{
    char a[100];
    long long int res;
    int i;
    scanf("%s",a);
    i = strlen(a);
    res = per(i);
    printf("%lld",res);
    return 0;
}

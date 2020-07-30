#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int ans;
    int i=1;
    scanf("%d",&n);
    while(i)
    {
        if(pow(2,i) >= n)
        {
            ans = i;
            break;
        }
        i++;
    }
    printf("%d",ans);
    return 0;
}

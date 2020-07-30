#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int forward,backward;
        int fditch,bditch;
        int time;
        char dit;
        scanf("%d %d %d %d %d",&forward,&backward,&time,&fditch,&bditch);
        int sum=0,pos=0;
        if((forward == backward) && ((forward<fditch) && (backward < bditch))) 
        {
            printf("No ditch");
            return 0;
        }
        bditch = -1 * bditch;
        while(pos < fditch && pos>bditch)
        {
            pos = pos + forward;
            if(pos>fditch)
            {
                pos = pos - fditch;
                sum = sum + forward - pos;
                printf("%d F",sum*time);
                return 0;
            }
            sum = sum + forward;
            pos = pos - backward;
            if(pos<bditch)
            {
                pos = abs(bditch - pos);
                sum = sum + backward - pos;
                printf("%d B",sum*time);
                return 0;
            }
            sum = sum + backward;
        }
        
    

    }
    return 0;
}

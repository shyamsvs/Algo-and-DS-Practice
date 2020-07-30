/*


#include<stdio.h>
#include<stdlib.h>
#define SIZE 100000
int no_of_tubs;



struct tubs
{
    int initial_volume;
    int in_coming;
    int out_going;
}tub[SIZE];


int check(struct tubs t1,struct tubs t2,int sec);



int main()
{
    int i,j,k,l,m;
    int seconds=0;
    scanf("%d",&no_of_tubs);
    for(i=0;i<no_of_tubs;i++)
    {
        scanf("%d",&tub[i].initial_volume);
        scanf("%d",&tub[i].in_coming);
        scanf("%d",&tub[i].out_going);
    }

    //Logic for checking


    for(j=0;j<no_of_tubs-1;j++)
    {
        if(tub[j].initial_volume < tub[j+1].initial_volume)
        {
            printf("No of seconds required = %d",seconds);
            exit(0);
        }
    }


    for(k=0;k<no_of_tubs-1;k++)
    {
        if(tub[k].initial_volume >= tub[k+1].initial_volume)
        {
            seconds = check(tub[k],tub[k+1],seconds);
        }
        else
        {
            continue;
        }
    }
    printf("%d",seconds);

    return 0;
}


 int check(struct tubs t1, struct tubs t2,int sec)
{
    int i,j;
    for(i=1;t1.initial_volume>t2.initial_volume;i++)
    {
        t2.initial_volume = t2.initial_volume + i*t2.in_coming;
        sec = i;
    }
    return sec;
}
*/



#include <stdio.h>
#include <math.h>
#define size 10000

struct tub
{
  int volume;
  int incoming_speed;
  int outgoing_speed;
}tub[size];

int main(void) 
{
  int no_of_tubs,secs=0,secs1;
  scanf("%d",&no_of_tubs);
  for(int ind=0 ; ind<no_of_tubs ; ind++)
  {
    scanf("%d",&tub[ind].volume);
    scanf("\t%d",&tub[ind].incoming_speed);
    scanf("\t%d",&tub[ind].outgoing_speed);
  }
  for(int ind=0 ; ind<no_of_tubs ; ind++)
  {
    for(int ind1=ind+1 ; ind1<no_of_tubs ; ind1++)
    {
      if((tub[ind].volume > tub[ind1].volume) && tub[ind1].volume!='\0')
      {
        tub[ind].volume=tub[ind].volume-(tub[ind].incoming_speed*tub[ind].outgoing_speed);
        secs=(tub[ind].volume+tub[ind].incoming_speed)-tub[ind].outgoing_speed;
        break;
      }
      else if((tub[ind].volume == tub[ind1].volume) && tub[ind1].volume!='\0')
      {
        secs=secs-((tub[ind].volume+tub[ind].incoming_speed)-tub[ind].outgoing_speed);
        break;
      }
      else if((tub[ind].volume < tub[ind1].volume) && tub[ind1].volume!='\0')
      {
        secs=secs-((tub[ind].volume+tub[ind].incoming_speed)-tub[ind].outgoing_speed);
        break;
      }
    }
    printf("%d ",tub[ind].volume);
  }
  secs1=abs(secs);
  printf("No of seconds:%d",secs1-1);

  return 0;
}




///Python answer



n = 3
init = [6,4,4]
inc = [2,1,1]
out = [1,3,4]


time=0
t=0
for ind in range(n-1):
    t=0
    if ind==0 and init[ind] >= init[ind+1]:
        init[ind] = init[ind] - out[ind]
    elif init[ind] >= init[ind+1] and init[ind] - out[ind] > init[ind-1]:
        init[ind] = init[ind] - out[ind]
        
    if init[ind+1] <= init[ind]:
        init[ind+1] += inc[ind+1]
        t+=1
        while init[ind+1] <= init[ind]:
            if ind==0 and init[ind] >= init[ind+1]:
                init[ind] = init[ind] - out[ind]
            elif init[ind] >= init[ind+1] and init[ind] - out[ind] > init[ind-1]:
                init[ind] = init[ind] - out[ind]
            if init[ind+1] <= init[ind]:
                init[ind+1] += inc[ind+1]
                t+=1
    if time<t:
        time=t
        
        
print(init, t)






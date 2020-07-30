#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int a[num],place,temp;;
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        place=i;
    }
    for(int i=0,j=place+1;i<place;i++,j++)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(int i=0;i<num;i++)
    {
        printf("%d ",a[i]);
        
    }
    return 0;
}





/*
#include <stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
  int i;
  int temp=*x;
  *x=*y;
  *y=temp;
}
void shiftleft(int left,int right,int *arr)
{
  int i;
  int temp=arr[left];
  for(i=left;i<right;i++)
  {
       arr[i]=arr[i+1];
  }
  arr[right]=temp;
}
void shiftright(int left,int right,int *arr)
{
  int i;
  int temp=arr[right];
  for(i=right-1;i>=left;i--)
  {
    arr[i+1]=arr[i];
  }
  arr[left]=temp;
}
void print(int *arr,int n){
  int i;
  for(i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }
  printf("\n");
}
int main(void) {
  int *arr,i,n,j,zero;
  scanf("%d",&n);
  zero=n/2;
  arr = (int*) malloc(n*sizeof(int));
  printf("Enter negative nos.:");
  for(i=0;i<n;i++){
    if(i==zero){
      arr[i]=0;
      printf("Enter positive nos.:");
    }
    else
      scanf("%d",&arr[i]);
  }
  printf("INPUT: ");
  print(arr,n);
for(i=zero-1,j=zero+1;i>=0 && j<=n-1; )
{
  swap(&arr[zero-1],&arr[zero+1]);
  i--;
  j++;
  if(arr[0]<0){
  shiftright(zero+1,j,arr);
  shiftleft(i,zero-1,arr);
  } 
}
  printf("RESULT: ");
  print(arr,n);
  return 0;
}
*/

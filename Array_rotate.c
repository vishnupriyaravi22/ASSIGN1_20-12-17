#include<stdio.h>
int a[7]={10,20,30,40,50,60,70};
int main(void)
{
 int rotno,i;
 void rotate();
 printf("Enter no of rotations\n");
 scanf("%d",&rotno);
 for(i=1;i<=rotno;i++)
 {
 rotate();
 }
 for(i=0;i<7;i++)
 printf("%d ",a[i]);
 return 0;
  }
  void rotate()
  {
  int temp,i;
  for(i=0;i<7;i++)
  {
  if(i==0)
  {
  temp=a[i];
  continue;
  }
  a[i-1]=a[i];
  }
  a[i-1]=temp;
  }
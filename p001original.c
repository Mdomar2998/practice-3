
#include<stdio.h>
int input ()
{
  int a;
  printf("enter the no\n");
  scanf("%d",&a);
  return a;
}
int findsum(int a,int b)
{
  int sum ;
  sum=a+b;
  return sum;
}
void output (int a ,int b, int c)
{
  printf("sum of %d + %d is %d \n",a,b,c);
}
int main()
{
  int z,y,x;
  z=input();
  y=input();
  x=findsum(z,y);
  output(z,y,x);
  return 0;
}
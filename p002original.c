#include<stdio.h>
int input(int *a,int *b)
{
  printf("enter a and b values\n");
  scanf("%d %d",a,b);
}
int add(int a,int b,int *sum)
{
  *sum=a+b;
}
int output(int c)
{
  printf("sum of a and b is %d",c);
}
int main ()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  output(z);

}
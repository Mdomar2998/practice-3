#include<stdio.h>
void input(int*a,int*b,int*c)
{
  printf("enter the first mumber:\t");
  scanf("%d",a);
  printf("enter the second number:\t");
  scanf("%d",b);
  printf("enter the third number:\t");
  scanf("%d",c);
}
void cmp(int a,int b,int c,int*large)
{
  if(a>b && a>c)
  *large=a;
  else if (b>c)
  *large=b;
  else
  *large=c;
}
void output(int largest)
{
  printf("\n the largest number is %d \n",largest);
}
int main ()
{
  int a,b,c,lar;
  input(&a,&b,&c);
  cmp(a,b,c,&lar);
  output(lar);
  return 0;
}



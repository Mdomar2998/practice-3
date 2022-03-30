   #include<stdio.h>
int input()
{
  int a;
  printf("enter the three number\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if(a>b && a>c)
  {
  return a;
  }
  else if((b>c)&&(b>a))
  {
  return b;
  }
  else
  {
  return c;
  }
}
int output(int a,int b,int c,int large)
{
  printf("large is %d",large);
}
int main()
{
  int x,y,z,large;
  x=input();
  y=input();
  z=input();
  large=cmp(x,y,z);
  output(x,y,z,large);
  return 0;
}


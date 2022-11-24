#include<stdio.h>
int myfunction(int x, int y)
{
  return x+y;
}
 int main()
{
 int a,b;
 printf("enter a number:");
scanf("%d",&a);
printf("enter a number");
scanf("%d",&b);
 int result=myfunction(a,b);
printf("result is =%d\n",result);
 return 0;
}

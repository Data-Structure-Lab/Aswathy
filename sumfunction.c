#include<stdio.h>
int myFunction(int x,int y){
return x+y;
}
int main()
{
int a,b;

printf("enter a number:");
scanf("%d",&a);
printf("enter a number:");
scanf("%d",&b);
int result=myFunction(a,b);
 printf("result is %d\n",result);
 return 0;
}

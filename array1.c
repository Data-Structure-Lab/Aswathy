#include<stdio.h>

int num,array[20];
void arraycreation();
void arrayinsertion(int[],int);
void arraydeletion(int[],int);
void arraysearch(int[],int);
void arraysort(int[],int);
void arraydisplay(int[],int);
void main()
{
int i,option;

printf("\n\n\tOUTPUT\n\t******");
printf("\n\n\tEnter the number of elements in array:");
scanf("%d",&num);
printf("\n\n\tEnter the members in to array:");
for(i=0;i<num;i++)
{
scanf("%d",&array[i]);
}

while(1)
{
printf("\n\n\tMENU\n\n\t1******\n\n\t1.Insertion\n\n\t2.Deletion\n\n\t3.Searching\n\n\t4.Sorting\n\n\t5.Display\n\n\t6.Exit");
scanf("%d",&option);
switch(option)
{
case 1:arrayinsertion(array,num);
num=num+1;
break;
case 2:arraydeletion(array,num);
num=num-1;
break;
case 3:arraysearch(array,num);
break;
case 4:arraysort(array,num);
break;
case 5:arraydisplay(array,num);
break;
case 6:exit(0);

break;
default:
printf("\n\n\tWrong option you selected.Enter valid option number");
break;
}
}

}
void arrayinsertion(int array[20],int num)
{
int i,position,element;

printf("\n\n\tEnter the number you want to insert:");
scanf("%d",&element);
printf("\n\n\tEnter the position you want to insert the itenm:");
scanf("%d",&position);
for(i=num;i>=position;i--)
{
array[i]=array[i-1];
}
array[i]=element;
arraydisplay(array,num+1);
}
void arraydeletion(int array[20],int num)
{
int del_element,j,i;

printf("\n\n\tEnter the element you want to delete:");
scanf("%d",&del_element);
for(i=0;i<num;i++)
{
if(array[i]=del_element)
{
for(j=i;j<num;j++)
{
array[j]=array[j+1];
}
}
}
arraydisplay(array,num-1);
}
void arraysort(int array[20],int num)
{
int i,temp,j;

for(i=0;i<num;i++)
{
for(j=i+1;j<num;j++)
{
if(array[i]>array[j])
{
temp=array[i];
array[i]=array[j];
array[j]=temp;
}
}
}
arraydisplay(array,num);
}
void arraysearch(int array[20],int num)
{
int item,flag=0,j;

printf("\n\n\tEnter the element you want to searchin the array:");
scanf("%d",&item);

for(int i=0;i<num;i++)
{
if(array[i]==item)
{
flag=1;
break;
}
else
{
flag=0;
}
}
if(flag==1)
{
printf("\n\n\tElement found in the array position:%d");
}
else
{
printf("\n\n\tElement not found in the array");
}
}
void arraydisplay(int array[20],int num)
{
int i;

printf("\n\n\tArray elements:");
for(i=0;i<num;i++)

printf("\t%d",array[i]);
}

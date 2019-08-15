#include<stdio.h>
#include<conio.h>
int main()
{
int i,start,end;
printf("\n Enter the starting no:");
scanf("%d",&start);
printf("\n Enter the ending no:");
scanf("%d",&end);
for(i=start;i>=end;i--)
{
printf("%d\n",i);
}
}

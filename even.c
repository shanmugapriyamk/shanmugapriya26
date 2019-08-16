#include<stdio.h>
void main()
{
 int i,n;
printf("Enter any number \n");
scanf("%d ",&n);
printf("even numbers up to inputted number are - \n");
for(i=2;i<=n;i+=2)
{
 printf(" %d \t",i);
}
getch();
}

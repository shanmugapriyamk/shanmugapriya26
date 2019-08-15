#include<stdio.h>
#include<conio.h>
int main()
{
 long long num;
 int count=0;
 printf("\n Enter the no:");
 scanf("%lld",&num);
 while(num!=0)
 {
 count++;
 num/=10;
 }
 printf("total digits :%d",count);
}

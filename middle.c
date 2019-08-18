#include<stdio.h>
int main()
{
   int a[100],n,i,b;
   printf("Enter the number of elements");
   scanf("%d",&n);
   printf("Enterscanf the array elements");
   scanf("%d",&a[i])
   for(i=0;i<n;i++)
   {
   
   if(n%2==0)
{
  b=a[n/2]/2;
for(i=0;i<n;i++)
{
   a[i]+=b;
}
}
if(n%2!=0)
{
   b=a[(n+1)/2]/2;
for(i=0;i<n;i++)
{
   a[i]+=b;
}
printf("New array")
for(i=0;i<n;i++)
{
  printf("%d",a[i]);
}
}

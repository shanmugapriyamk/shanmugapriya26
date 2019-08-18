#include <stdio.h>
int main() {
int sec,sec1 h1, m1, s1,h2,m2,s2,sub;
printf("Input seconds: ");
scanf("%d", &sec);
printf("Input seconds: ");
scanf("%d", &sec1);
h1 = (sec/3600); 
m1 = (sec -(3600*h))/60;
s1 = (sec -(3600*h)-(m*60));
printf("H:M:S - %d:%d:%d\n",h,m,s);
h2 = (sec/3600); 
m2 = (sec -(3600*h))/60;
s2 = (sec -(3600*h)-(m*60));
printf("H:M:S - %d:%d:%d\n",h,m,s);
sub=(h1+m1+s1)-(h2+m2+s2);
}

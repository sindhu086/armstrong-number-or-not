#include<stdio.h>
void main()
{
int s=0,n,r,t;
printf("enter the number n:");
scanf("%d",&n);
t=n;
while(n>0)
{
r=n%10;
s=s+(r*r*r);
n=n/10;
}
printf("sum of cube of digits is %d",s);
{
if(t==s)
   printf("\n armstrong nuumber");
 else
    printf("\n not a armstrong number");
   }
   }

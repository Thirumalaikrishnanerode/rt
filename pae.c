#include<stdio.h>
int main()
{
int n,r,i,j;
scanf("%d",&n);
j=n;
while(n!=0)
{
r=n%10;
i=i*10+r;
n/=10;
}
if(j==i)
{
printf("it is an palindrome");
}
else
{
printf("it is not an palindrome");
}
return 0;
}

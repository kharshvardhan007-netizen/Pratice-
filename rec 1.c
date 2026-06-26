//recursion :factorial
#include<stdio.h>
int sum (int n)
{
if(n==0)
  return 0;
else
  return (n%10)+sum(n/10);
}
void main ()
{
	int n;
	printf("enter the two value of n ");
	scanf("%d",&n);
	printf("sum of digit =%d\n",sum(n));
	
}

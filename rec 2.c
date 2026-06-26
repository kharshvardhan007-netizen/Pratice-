//recursion :factorial
#include<stdio.h>
sum (n)
{
if(n==0)
  return 0;
else
  return (n%10)+sum(n/10);
}
void main()
{
	sum(6848);
}


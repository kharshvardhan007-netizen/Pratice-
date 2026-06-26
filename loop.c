//loop program:sum of all digit of a no
#include<stdio.h>
int main()
 
{
 	int n,rev=0,rem;
 	printf("enter the no");
 	scan("%d",&n);
 	do
 	{
 	   rem=n%10;
 	   sum=(rev*10)+rem;
 	   n=n/10;
	 }
 printf("sum off all digit of given no=%d",sum);	 

}

// functions:with args and with  no.return value
#include<stdio.h>
void check(int);
void check(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if (sum==n)
	printf("no is perfect");
	else
	   printf("no is not perfect");
}
void main()
{
	int n;
	printf("enter any no");
	scanf("%d",&n);
	
}

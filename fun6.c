// functions:with args and with  no.return value
#include<stdio.h>
int check(int);
int check(int n)
{
	int i,sum;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
 	    sum=sum+i;
	}
	if (sum==n)
        return 1;
	else
	   return 0;
}
void main()
{
	int n,res;
	printf("enter any no");
	scanf("%d",&n);
	res=check(n);//call by value
	if(res==1)
     printf("no is perfect");
    else;
      return 0;
	
}

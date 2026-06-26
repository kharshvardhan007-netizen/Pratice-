//
#include<stdio.h>
void main ()
{
	int row,i,j,sp;
	printf("enter the row");
	scanf("%d",&row);
	for(i=1;i<=row;i++);
	{
		for(sp=1;sp<=row-i;sp++)
		{
			printf("");
		}
		for(j=i;j<=i;j++)
		printf("*");
	}
}

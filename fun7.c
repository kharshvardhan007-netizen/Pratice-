// functions:no args and no return value
#include<stdio.h>
void add(float,float);
void add(float p,float q)
{
	float
	sum=p+q;
	printf("sum=%f",sum);
}
void main()
{
	
   float p,q,sum;
   printf("enter the value of a and b");
   scanf("%f%f",&p,&q);
   add(p,q);//actual parametre
   printf("sum=%f",sum);
}

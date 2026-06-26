// functions:no args and no return value
#include<stdio.h>
void add();
void add()
{
   float a,b,sum;
   printf("enter the value of a and b");
   scanf("%f%f",&a,&b);
   sum=a+b;
   printf("sum=%f",sum);
}
void main()
{
	add();
}

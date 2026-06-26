// if statement : greater between three numbers

#include<stdio.h>

void main()
{
	float s1,s2,s3,s4,s5,total,per;
	printf("enter the marks of five subject");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	per=total/5;
	printf("total marks=%f\n",total);
	printf("percentage=%f\n",per);
	if(per>=90 && per<=100)
	printf("A+");
	else if(per>=80 && per<=90)
	printf("A");
	else if (per>=70 && per<=80)
	printf("B+");
	else if(per>=60 && per<=70)
		printf("B");
	else if(per>=50 && per<=60)
		printf("C+");
	else if(per>45 && per<=50)
	printf("C");
	else 
	printf("D");
}



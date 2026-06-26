//switch case :( mean drive programming )
#include<stdio.h>
int main ()
{
	char choice;
	float a, b;
	printf("-------------------\n");
	printf(" enter + symbol to add a nos\n ");
		printf(" enter - symbol to subtract a nos\n ");
			printf(" enter * symbol to multiply a nos\n ");
				printf(" enter / symbol to divide a nos\n ");

	scanf("%c",&choice);
	switch(choice)
	{
	 case '+':
		printf("enter the value of a and b ");
		scanf("%f%f",&a,&b);
		printf("sum= %f\n",a+b);
		break;
		
      case '-':
      	printf("enter the value of a and b ");
		scanf("%f%f",&a,&b);
		printf("sum= %f\n",a-b);
      	break;

 	  case '*':
 	  	printf("enter the value of a and b ");
		scanf("%f%f",&a,&b);
		printf("sum= %f\n",a*b);
 		break;

 	  	
 	  case '/':
	 printf("enter the value of a and b ");
		scanf("%f%f",&a,&b);
		printf("sum= %f\n",a/b);
 	  	break;

 	  	
 	  
   	   	default:
   	   	printf("invalid choice\n");

	}
}

	

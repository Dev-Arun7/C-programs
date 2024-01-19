/*
 ============================================================================
 Name        : 011_Math.c
 Author      : Arun
 Version     :
 Copyright   : Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1,num2,choise;
	float result;
	setbuf(stdout, NULL);
	printf(" Enter 2 numbers ");
	scanf("%d%d",&num1,&num2);
	printf(" 1 Addition \n 2 Subtraction \n 3 Multiplication \n 4 Division \n Enter your choice \n");
	scanf("%d",&choise);
	if(choise==1)
	{
		result=num1+num2;
		printf("Answer is %f",result);
	}
	else if(choise==2)
	{
		result=num1-num2;
		printf("Answer is %f",result);
	}
	else if(choise==3)
	{
		result=num1*num2;
		printf("Answer is %f",result);
	}
	else if(choise==4)
	{
		result=num1/num2;
		printf("Answer is %f",result);
	}
	else
	{
		printf("Fool....!!!");
	}
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : 045A_All.c
 Author      : Arun
 Version     :
 Copyright   : Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int menu();
void sum();
void sub(int,int);
int mul(int,int);
float divi();

int main(void)
{
	int result,choice,num1,num2,re=1;
	float resultDiv;
	setbuf(stdout,NULL);
	printf("Hi Arun \n");
	usleep(500000);
	while(re==1)
	{
		choice=menu();

		switch(choice)

		{
		case 1:
			//Addition using without argument & without return
			sum();
			break;
		case 2:
			//Subtraction using with argument and without return..
			printf("Enter two numbers for subtraction \n");
			scanf("%d%d",&num1,&num2);
			sub(num1,num2);
			break;
		case 3:
		//Multiplication using with argument and with return.
			printf("Enter two numbers for multiplication \n");
			scanf("%d%d",&num1,&num2);
			result=mul(num1,num2);
			printf("The answer is %d",result);
			break;
		case 4:
			//Division using without argument and with return.
			resultDiv=divi();
			printf("The answer is %f",resultDiv);

		}
		printf("\n\n\nDo you want to continue? (1 or 0)\n");
		usleep(500000);
		scanf("%d",&re);
	}
printf("Thank you");
	return EXIT_SUCCESS;
}


int menu()
{
		int choice;
		printf("Select the operation \n");
		usleep(100000);
		printf("1-Addition\n");
		usleep(100000);
		printf("2-Subtract\n");
		usleep(100000);
		printf("3-Multiply\n");
		usleep(100000);
		printf("4-Divide\n");
		usleep(100000);
		scanf("%d",&choice);
		return choice;
}


void sum()
{
	int sum,num1,num2;
	printf("Enter the number \n");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("The sum is %d",sum);
}


void sub(int n1,int n2)
{
	int result;
	result=n1-n2;
	printf("The answer is %d",result);
}


int mul(int n1,int n2)
{
	int result;
	result=n1*n2;
	return result;
}


float divi()
{
	int num1,num2;
	float result;
	printf("Enter two numbers for division \n");
	scanf("%d%d",&num1,&num2);
	result=(float)num1/num2;
	return result;
}




/*
 ============================================================================
 Name        : 015_Select.c
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
	int day;
	setbuf(stdout,NULL);
	printf("   Menu   \n 1 Sunday \n 2 Monday \n 3 Tuesday \n 4 Wednesday \n 5 Thursday \n 6 Friday \n 7 Saturday \n   Select your option  \n ");
	scanf("%d",&day);
	switch(day)
	{
	case 1:
		printf("Sunday");
		break;
	case 2:
		printf("Monday");
		break;
	case 3:
		printf("Tuesday");
		break;
	case 4:
		printf("Wednesday");
		break;
	case 5:
		printf("Thusday");
		break;
	case 6:
		printf("Friday");
		break;
	case 7:
		printf("Saturday");
		break;
	default:
		printf("       Invalid entry....!");
	}
	return EXIT_SUCCESS;
}

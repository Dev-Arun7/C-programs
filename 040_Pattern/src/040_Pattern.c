/*
 ============================================================================
 Name        : 040_Pattern.c
 Author      : Arun
 Version     :
 Copyright   : Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdlib.h>

#include <stdio.h>

int main()
{
  int rows, i, j, space;
  setbuf(stdout,NULL);

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  for (i = 1; i <= rows; i++)
  {
      for (space = i; space < rows; space++)
      {
          printf("  ");
      }
      for (j = 1; j <= i; j++)
      {
          printf("* ");
      }
      printf("\n");
  }

  for (i = rows - 1; i >= 1; i--)
  {
      for (space = i; space < rows; space++)
      {
          printf("  ");
      }
      for (j = 1; j <= i; j++)
      {
          printf("* ");
      }
      printf("\n");
  }

  return 0;
}

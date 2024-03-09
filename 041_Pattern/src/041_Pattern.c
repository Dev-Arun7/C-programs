/*
 ============================================================================
 Name        : 041_Pattern.c
 Author      : Arun
 Version     :
 Copyright   : Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
  int i, j;
  setbuf(stdout,NULL);

  for (i = 0; i < 5; i++)
  {
      for (j = 0; j < 5; j++)
      {
          if (i % 2 == 0)
          {
              printf("* ");
          }
          else
          {
              printf("# ");
          }
      }
      printf("\n");
      sleep(1);
  }

  return 0;
}


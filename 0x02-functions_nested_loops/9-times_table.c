#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * times_table - Prints the 9 times table
 *
 *
 *
 * Return: void(success)
 *
 */
void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
			printf("%d", x);
			if (j != 9)
			{
				printf(",");
			}
			if (x < 10 && i != 9 && j != 9)
			{
				printf("  ");
			}
			else if (x > 9 && i != 9 && j !=9)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

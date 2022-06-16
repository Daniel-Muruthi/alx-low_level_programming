#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * times_table - Prints the 9 times table.
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
			if (j == 9)
			{
				continue;
			}
			else
			{
				printf(", ");
				if (x < 7 && i < 10 && j < 10)
				{
				printf(" ");
				}
			}
		}
		printf("\n");
	}
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * times_table - Prints the 9 times table
 *
 *
 *
 * Return: void
 *
 */
void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 8; i++)
	{
		printf("%d\n", i);
		for (j = 0; j <= 8; j++)
		{
			x = i * j;
			printf("%d", x);
			if (j != 8)
			{
				printf(", ");
			}
		}
	}
}

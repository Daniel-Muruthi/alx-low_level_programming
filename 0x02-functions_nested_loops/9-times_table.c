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
	int i, j[10], x;

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", i);
		for (j = 0; j < 10; j++)
		{
			x = i * j;
			printf("%d", x);
			if (!j[10])
			{
				printf(", ");
			}
		}
	}
}

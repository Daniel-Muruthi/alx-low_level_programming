#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_times_table - Entry point
 * Description - Prints an int n times table
 * @n: parameter
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = (i * j);
				if ((product / 10) == 0)
				{
					if (product != 0)
						printf(" ");
					printf("%d", product);
					if (j == n)
						continue;
					printf(",  ");
					if (i == 0 && j != n)
						printf(" ");
				}
				else
				{
					printf("%d", product);
					if (j == n)
						continue;
					printf(",  ");
				}
			}
			printf("\n");
		}
	}
}

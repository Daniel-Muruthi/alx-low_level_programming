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

			if (x % 10 == 0)
			{
				printf("%d", x);
				if (j != 0)
				{
					printf(" ");
				}
				_putchar(x + '0');

				if (j == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');

				if (j == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

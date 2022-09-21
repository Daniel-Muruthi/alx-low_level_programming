#include <stdio.h>
#include "main.h"
/**
 * times_table - Entry point
 * Description - prints 9 times table starting with 0
 */
void times_table(void)
{
	int i, j, product;

	product = i * j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (product <= 9 && i < 9)
			{
				_putchar(product + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (product > 9 && i < 9)
			{
				_putchar(product + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('$');
		_putchar('\n');
	}
}

#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * Description - Prints all natural numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i > 9 || i < -9)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			if (i == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		else if (i > -10 && i < 10)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

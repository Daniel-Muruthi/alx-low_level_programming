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
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
		_putchar(',');
		for (j = 0; j < 9; j++)
		{
			x = i * j;
			_putchar(x);
			_putchar(',');
		}
	}
}

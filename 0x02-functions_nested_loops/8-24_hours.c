#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Entry point
 * Description - Prints every minute of the day of jack Bauer from 00:00-23:59
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 00; i <= 23; i++)
	{
		for (j = 00; j <= 59; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}

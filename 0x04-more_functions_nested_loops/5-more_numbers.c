#include "main.h"
/**
 * more_numbers - Entry point
 * Description - Prints 10 times numbers 0- 14
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

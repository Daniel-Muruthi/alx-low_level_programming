#include "main.h"
/**
 * print_line - Entry point
 * Description - Draws straight line in the terminal
 * @n: number of times underscore should be printed
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
		_putchar('\n');

}

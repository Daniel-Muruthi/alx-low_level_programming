#include "main.h"
/**
 * print_diagonal - Entry point
 * Description - Draaws a diagonal line on the terminal
 * @n: number of times to print the diagonal
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			i += 1;
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}

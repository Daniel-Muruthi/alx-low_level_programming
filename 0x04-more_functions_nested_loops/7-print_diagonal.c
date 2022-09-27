#include "main.h"
/**
 * print_diagonal - Entry point
 * Description - Draaws a diagonal line on the terminal
 * @n: number of times to print the diagonal
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			_putchar('\\');
			i++
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_triangle - Entry point
 * Description - Prints a triangle followed by a newline
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = i; j > 0; j--)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
	}
}
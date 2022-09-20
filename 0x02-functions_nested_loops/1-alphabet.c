#include "main.h"
/**
 * print_alphabet - Function Entry point
 * Description -Function to print alphabet in lowercase
 * Return: Always void (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

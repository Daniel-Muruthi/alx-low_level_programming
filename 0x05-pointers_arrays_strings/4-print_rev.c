#include <stdio.h>
#include "main.h"
/**
 * print_rev - Entry point
 * Description - prints string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i;

	for (i = (_strlen(s)); i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

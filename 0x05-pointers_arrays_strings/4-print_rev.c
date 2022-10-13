#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * print_rev - Entry point
 * Description - prints string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i;

	for (i = (strlen(s)); i > 0; i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}

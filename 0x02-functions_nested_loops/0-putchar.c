#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description - Prints a string followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c[8] = "_putchar";
	int j = sizeof(c);

	for (i = 0; i <= j; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}

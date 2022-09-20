#include <stdio.h>
/**
 * main - Entry point
 * Description - Prints a string followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c[8] = "_putchar";

	for (i = 0; i <= (sizeof(c)); i++)
	{
		putchar(c + 'a');
	}
	putchar('\n');
	return (0);
}

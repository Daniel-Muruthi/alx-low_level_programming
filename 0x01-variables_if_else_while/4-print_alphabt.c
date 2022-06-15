#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry Point
 *
 *
 * Return: 0(success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		while (c != 'e' || c != 'f')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}

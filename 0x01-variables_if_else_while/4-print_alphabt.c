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
		if (c == 'e' || c == 'f')
		{
			continue;
		}
		else
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}

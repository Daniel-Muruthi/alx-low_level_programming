#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry-Point
 *
 *Return: 0(success)
 *
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
		if (c == 'z')
		{
			for (c = 'A'; c <= 'Z'; ++c)
			{
				putchar(c);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}

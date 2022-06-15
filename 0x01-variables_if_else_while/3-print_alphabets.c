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

	for (c='a'; c<'z'; ++c)
	{
		while (c != 'z')
		{
			putchar(c);
		}
		putchar(toupper(c));
	}
	putchar('\n');
	return (0);
}

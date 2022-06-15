#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Print out the alphabet in reverse
 *
 *
 * Return; 0(success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

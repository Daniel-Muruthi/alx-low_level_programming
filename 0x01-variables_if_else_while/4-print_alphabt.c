#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *
 *
 *
 *
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'e' || c != 'f')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}

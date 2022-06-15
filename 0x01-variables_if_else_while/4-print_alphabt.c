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
		putchar(c);
		if (c == 'e' || c == 'f')
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}

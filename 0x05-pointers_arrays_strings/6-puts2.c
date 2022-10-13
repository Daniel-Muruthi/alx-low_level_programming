#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * puts2 - Entry point
 * Description - Prints all characters of a string followed by a new line
 * @str: string printed
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char c;

	while (str[j++])
	{
		k = k + 1;
	}
	c = str[k];
	for (i = 0; i <= (k - 1); i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", c[i]);
		}
	}
	printf("\n");
}

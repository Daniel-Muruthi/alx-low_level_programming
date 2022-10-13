#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - Entry Point
 * Description - Prints half of string line followed by a new line
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (str[j++])
	{
		k++;
	}
	if (k % 2 == 0)
	{
		for (i = (k/2); i < k; i++)
		{
			printf("%c", str[i]);
		}
		printf("\n");
	}
	if (k % 2 != 0)
	{
		for (i = (k + 1)/2; i <= (k - 1); i++)
		{
			printf("%c", str[i]);
		}
		printf("\n");
	}
}

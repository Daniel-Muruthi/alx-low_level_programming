#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * rev_string - Entry Point
 * Description - Function that reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = strlen(s), j;
	char c[i];

	s = c[i];
	for (j = i - 1; j >= 0; j--)
	{
		printf("%c", c[j]);
	}
}

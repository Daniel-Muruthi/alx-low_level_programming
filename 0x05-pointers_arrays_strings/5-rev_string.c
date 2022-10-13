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
	int i = 0;
	int k = 0;
	int j;

	for (j = 0; j <= (strlen(s) - 1); j++)
	{
		k = k + 1;
	}
	for (i = k; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}

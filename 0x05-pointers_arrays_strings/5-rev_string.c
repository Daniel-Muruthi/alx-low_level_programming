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
	int i;

	for (i = (_strlen(s) - 1); i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}

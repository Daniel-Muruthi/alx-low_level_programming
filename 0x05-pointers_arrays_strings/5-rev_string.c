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
	int j = 0;
	char c;

	while (j++)
	{
		k = k + 1;
	}
	for (i = k - 1; i >= k / 2; i--)
	{
		c = s[i];
		s[i] = s[k - i - 1];
		s[k -i - 1] = c;
	}
}

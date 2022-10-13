#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _atoi - Entry Point
 * Description - converts string into an integer
 * @s: string
 * Return: A Number
 */
int _atoi(char *s)
{
	int i = 1;
	int k = 0;
	unsigned int j;
	unsigned int num;

	for (j = 0; j < (strlen(s)); j++)
	{
		if (s[j] == '-')
		{
			i *= -1;
		}
	}
	num = atoi(s);
	return (num * i);
}

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
	unsigned int j;
	unsigned int num;

	for (j = 0; j < (strlen(s)); j++)
	{
		if (*s == '-')
		{
			i *= -1;
		}
		else if (*s >= '0' && *s <= '9')
			num = atoi(*s);
		else if (num > 0)
			break;

	}
	if (i == -1)
		putchar('-');
	return (num * i);
}

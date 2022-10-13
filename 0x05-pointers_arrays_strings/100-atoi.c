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
	int i;

	if (s[0] == '-')
	{
		printf("-");
	}
	i = atoi(s);
	return (printf("%d\n", i));
}

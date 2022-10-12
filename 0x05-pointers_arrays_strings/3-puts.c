#include <stdio.h>
#include <string.h>
/**
 * _puts - Entry Point
 * Description - Prints a string followed by a newline
 * @str: string variable
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		puts(str[i]);
		i++;
	}
	puts('\n');
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Prints all single digit numbers
 *
 *
 *Return: 0(success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
		}
		putchar(' ');
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - Prints all single digit numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}

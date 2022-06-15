#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 *
 * main - print string
 *
 * Return: 0(success)
 */
int main(void)
{
	int i;
	char word[9] = "_putchar";

	for (i = 0; i < sizeof(word); i++)
	{
		putchar(word[i]);
	}
	putchar('\n');
	return (0);

}

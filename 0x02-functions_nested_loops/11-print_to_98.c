#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * print_to_98 - checks for lowercase characters
 *
 * @n: parameter
 *
 * Return: None/Void
 *
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
                        {
				printf(", ");
                        }
		}
		printf("\n");
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d", i);
			if (i != 98)
                        {
				printf(", ");
                        }
		}
		printf("\n");
	}
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - prints all different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = (i + 1); j <= 9; j++)
		{
			for (k = (j + 1); k <= 9; k++)
			{
				if (i == j || j == k || i == k)
				{
					continue;
				}
				else
				{
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					putchar((k % 10) + '0');
					if (i == 7 && j == 8 && k == 9)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

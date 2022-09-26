#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - find and print even valued sum terms in the fibonacci sequence
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i[100], count;

	for (count = 0; count <= 100; count++)
	{
		i[0] = 1;
		i[1] = 2;
		i[count] = i[(count - 1)] + i[(count + 2)];
		if (i[count] <= 4000000 && i[count] % 2 == 0)
		{
			sum = sum + i[count];
			if (i[count] == 4000000)
			{
				printf("%d", sum);
				break;
			}
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

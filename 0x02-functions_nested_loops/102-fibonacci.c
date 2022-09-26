#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - Prints first 50 fibonnacci numbers starting with 1, 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i[50], count;

	for (count = 0; count <= 50; count++)
	{
		i[0] = 1;
		i[1] = 2;
		while (count > 1 && count <= 50)
		{
			i[count] = i[(count - 2)] + i[(count - 1)];
		}
		printf("%d", i[count]);
		if (count == 50)
			continue;
		printf(", ");
	}
	printf("\n");
	return (0);
}

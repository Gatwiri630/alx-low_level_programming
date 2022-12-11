#include <stdio.h>

/**
 * main = all single digit numbers of base 10 starting from 0, followed by a new line.
 * Return: 0
 */

int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
		printf("%d", y);
	printf("\n");
	return (0);
}

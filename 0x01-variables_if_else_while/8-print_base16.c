#include <stdio.h>

/**
 * main - print base 16 numbers
 * Return: 0
 */

int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}


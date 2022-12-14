#include "main.h"
/**
 * main - make alphabet 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <=90)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
	return 0;
}


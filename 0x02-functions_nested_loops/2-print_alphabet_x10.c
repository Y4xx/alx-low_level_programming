#include "main.h"

/**
 * print_alphabet_x10 - Y4x
 */
void print_alphabet_x10(void)
{
	char c;
	int j;

	j = 0;

	while (j < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		j++;
	}
}

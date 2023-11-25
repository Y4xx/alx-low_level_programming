#include "main.h"

/**
 * binary_to_uint - convert the binary number to a decimal
 * @b: points to a string of 0's and 1's
 * Return: decimal format of the binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len] == '1'))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}

	return (num);
}

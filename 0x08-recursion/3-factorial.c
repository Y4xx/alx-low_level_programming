#include "main.h"
/**
 * factorial - Calculates the factorial of a given number.
 * @n: The input number.
 *
 * Return: The factorial of the number, or -1 for negative input.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

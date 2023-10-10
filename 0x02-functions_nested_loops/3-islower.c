#include "main.h"

/**
 * _islower - check if char is lowercase - Y4x
 * @x: is the char to be checked.
 */

int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
		return (1);
	else
		return (0);
}

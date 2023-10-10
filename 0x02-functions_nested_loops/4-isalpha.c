#include "main.h"
/**
 * _isalpha - Y4x
 * @x: Character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int x)
{
	return ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'));
}

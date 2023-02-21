#include "main.h"

/**
 * _isLower - checks for lowercase letters..
 *
 * @c: the character in ASCII mode..
 *
 * Return: 0 if false, 1 if true..
 */

int _islower(int c)
{
	if ((97 <= c) && (c <= 122))
		return (1);
	else
		return (0);
	_putchar('\n');

}

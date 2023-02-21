#include "main.h"

/**
 * _islower - checks for lowercase letters..
 *
 * @c: the character in ASCII mode..
 *
 * Return: 0 if false, 1 if true..
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
	_putchar('\n');

}

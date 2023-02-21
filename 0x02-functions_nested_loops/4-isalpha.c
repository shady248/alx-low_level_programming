#include "main.h"

/**
 * _isalpha - checks for charcters: upper or lower case..
 *
 * @c: The charcter in ASCII mode.
 *
 * Return: 1 if it's a character , 0 otherwise..
 */
int _isalpha(int c)
{
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
	_putchar('\n');
}

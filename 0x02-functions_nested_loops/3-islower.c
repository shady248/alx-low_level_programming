#include "main.h"

/**
 * _isLower - checks for lowercase letters..
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if ((97 <= c) | (c <= 122))
		return (1);
	else
		return (0);

}

#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int i)
{
	int l = i % 10;
	if (l > 0)
		return (l);
	else
		return (l * -1);

}

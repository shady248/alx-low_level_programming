#include <stdio.h>
#include "main.h"

/**
 * main - Prints natural numbers below 1024 that are
 * multiplies of 3 or 5
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n == 0)
		n = n+1;

	for (n;n>=98;n++)
	{
		printf("%d\n",n);
		return (0);
	}
}

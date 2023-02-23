#include "main.h"

/**
  * print_diagonal - prints the charcter \
  * @n: number of diaginal lines
  * Return: none
  */
void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar(92);
		n--;
	}
	_putchar('\n');
}

#include "main.h"

/**
  * print_line - draws a straight line in the terminal
  * @n: number of dashes
  * Return: None
  */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar('\n');
}

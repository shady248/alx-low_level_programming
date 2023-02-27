#include "main.h"

/**
  *
  *
  *
  */
void puts_half(char *str)
{
	int length = sizeof(str);
	int n;
	
	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length - 1) / 2;
	
	while (n <= length)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}


#include "main.h"

/**
  *
  *
  */
void puts2(char *str)
{
	int counter;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[counter]);
		counter+2;
	}
	_putchar('\n');
}

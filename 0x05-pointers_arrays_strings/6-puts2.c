#include "main.h"

/**
  *
  *
  */
void puts2(char *str)
{
	int counter = 0;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[counter]);
		counter = counter+2;
	}
	_putchar('\n');
}

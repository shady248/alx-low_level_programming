#include "main.h"

/**
  *
  *
  *
  */
void print_rev(char *s)
{
	int counter;

	counter = sizeof(s);
	while (counter >= 0 || counter == 0)
	{
		if ( s[counter] != '\0')
		{
			_putchar(s[counter]);
		}
		counter--;
	}
	_putchar('\n');
}

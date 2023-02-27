#include "main.h"

/**
  *
  *
  *
  */
void print_rev(char *s)
{
	int size;

	size = sizeof(s);
	while (size >= 0)
	{
		if ( s[size] != '\0')
		{
			_putchar(s[size]);
		}
		size--;
	}
	_putchar('\n');
}

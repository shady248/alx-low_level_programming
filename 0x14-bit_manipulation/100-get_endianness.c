#include "main.h"

/**
  * get_endianness -  checks the endianness.
  *
  * Return: 0 if big endian, 1 if little endian
  */
int get_endianness(void)
{
	unsigned int s;
	char *c;

	s = 1;
	c = (char *) &s;
	return ((int)*c);
}

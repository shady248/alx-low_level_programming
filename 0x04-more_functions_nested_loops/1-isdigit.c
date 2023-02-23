#include "main.h"

/** _isdigit - checks for a didit
  *
  * @c: character in ASCII mode
  *
  * Return: 1 if true , 0 otherwise
  */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}

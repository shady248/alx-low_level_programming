include "main.h"

/**
 * _strlen - counts the string characters.
 * @ count: just a counter
 * @s: string to be counted
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}

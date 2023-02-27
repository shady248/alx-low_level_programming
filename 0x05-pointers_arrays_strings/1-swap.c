#include "main.h"

/**
 * swap_int - swaps the values of two intigers.
 * @ temp : temporaroy variable.
 * @a : pointer to the first argument.
 * @b : pointer to the secod argument.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

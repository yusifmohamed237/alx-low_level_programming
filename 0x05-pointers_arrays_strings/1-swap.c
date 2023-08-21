#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: int parameter
 * @b: int parameter
 *
 * Return: Nothing
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

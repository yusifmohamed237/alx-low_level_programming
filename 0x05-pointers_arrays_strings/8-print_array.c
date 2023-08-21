#include "main.h"

/**
 * print_array - function that prints half of a string, followed by a new line.
 *
 * @n: element parameter
 * @a: string parameter
 *
 * Return: nothing
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != (n - 1))
printf("%d, ", a[i]);
else
printf("%d", a[i]);
}
}


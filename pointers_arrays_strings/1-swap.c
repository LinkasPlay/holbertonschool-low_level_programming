#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to first integer
 * @b: Pointer to second integer
 *
 * Description: This function exchanges the values stored
 * at the memory addresses pointed to by @a and @b.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

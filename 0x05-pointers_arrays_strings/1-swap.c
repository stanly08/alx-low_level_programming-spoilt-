#include "main.h"
/**
 * swap_int - swap two integer values
 * @author stanly
 * @a: swaps and stores b
 * @b: swaps and stores a
 * Return: 0
 */

void swap_int(int *a, int *b)

{
	int change;

	change = *b;

	*b = *a;

	*a = change;

}


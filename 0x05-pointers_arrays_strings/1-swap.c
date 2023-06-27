#include "main.h"

/**
 * swap_int - This takes in two variable integers nd swaps them
 * @a: Swap and stores address of b
 * @b: Swap and stores address of a
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int change;
	change = *b;
	*b = *a;
	*a = change;
}

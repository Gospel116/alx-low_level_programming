#include "main.h"

/**
 * reverse_array - This prints the reverse of an array of integers
 * @a: The pointer of an array
 * @n: The number of elements of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		tmp = a[counter];
		a[counter++] = a[n];
		a[n--] = tmp;
	}
}

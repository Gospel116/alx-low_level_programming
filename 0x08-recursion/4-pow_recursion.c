#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the number of y
 * @x: the value to multiply
 * @y: the value to multiply the value
 *
 * Return: the value mutiplied y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

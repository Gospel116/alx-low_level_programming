#include "main.h"

/**
 * *_memset - Program that fills a block of memory with a specific value
 * @s: beginning address of memory to be filled
 * @b: expected value
 * @n: bytes to be changed
 *
 * Return: change array with new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}

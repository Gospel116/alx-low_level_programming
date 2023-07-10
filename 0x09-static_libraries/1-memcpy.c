#include "main.h"
/**
 * _memcpy - function that copies area of memory
 * @dest: where memory is stored
 * @src: where memory is strored
 * @n: number of bytes
 *
 * Return: memory copied with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}

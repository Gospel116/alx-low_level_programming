#include "main.h"

/**
 * *_strncat - function that concatenate two strings
 * using mostly n bytes from arc
 * @dest: entered value
 * @src: entered value
 * @n: entered value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int o;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	o = 0;
	while (o < n && src[o] != '\0')
	{
		dest[i] = src[o];
		i++;
		o++;
	}
	dest[i] = '\0';
	return (dest);
}

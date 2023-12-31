#include "main.h"

/**
 * *_strcpy - This copies the string pointed to by src
 * @dest: The char type string
 * @src: The char type string
 * Descripton: This copies the string pointed to by the pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}

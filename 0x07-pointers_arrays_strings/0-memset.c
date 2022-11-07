#include "main.h"

/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

return (dest);
}


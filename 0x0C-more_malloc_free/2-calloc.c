#include <stdlib.h>
#include "main.h"

/**
 * *_memset - Fills the memory with a constant byte
 * @j: Memory area to be filled
 * @b: Char to copy
 * @n: Number of times to copy b
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *j, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		j[i] = b;
	}

	return (j);
}
/**
 * *_calloc - allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);
	return (ptr);
}

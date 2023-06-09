#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Mary Okekunle
 * Return: 0 for big, 3 for little
 */
int get_endianness(void)
{
	unsigned int d = 3;
	char *c = (char *) &d;

	return (*c);
}

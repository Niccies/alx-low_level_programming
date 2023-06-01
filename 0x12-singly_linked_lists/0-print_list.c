
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @c: pointer to the list_t list to print
 * Mary Okekunle
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *c)
{
	size_t s = 0;

	while (c)
	{
		if (!c->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", c->len, c->str);
		c = c->next;
		s++;
	}

	return (s);
}

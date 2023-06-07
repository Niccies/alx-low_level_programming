#include "lists.h"

/**
 * listint_len - return the number of elements in the linked list
 * Mary Okekunle
 * @l: linked list of type listint_t to traverse
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *L)
{
	size_t num = 0;

	while (l)
	{
		num++;
		l = l->next;
	}

	return (num);
}

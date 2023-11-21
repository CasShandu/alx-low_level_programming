#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_t - self referential struct
 * for creating nodes of a singly linked list
 * @n: integer
 * @next: referential pointer
 * pointer to the next node of a list
 */

typedef struct listint_t
{
	int n;
	struct listint_t *next;

} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);


#endif

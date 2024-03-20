#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *current; //declaration of variable current of type list_t//

	while ((current = head) != NULL)
	{
		head = head->next; //updates the head node to the next node of the list//
		free(current->str); //deallocates memory previously allocated to pointer (current->str)//
		free(current); //frees memory allocated//
	}

}

//free_list - typically refers to a data structure used to manage memory allocation and deallocation where memory is allocated during runtime
//using function such as malloc or new, and then later freed using free or delete.//

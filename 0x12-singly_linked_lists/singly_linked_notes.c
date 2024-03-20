

//* newNode->data = data;

//This line assigns the value of the variable data to the data field of the newly created node (newNode). This assumes that the Node structure has a member named data to store the data associated with each node//

//* newNode->next = (*head)->top;

//This line sets the next field of the new node to point to the current top node of the stack. This effectively inserts the new node at the beginning of the linked list, making it the new top of the stack//

#include "lists.h"

/**
 * print_list - print all element in a singly linked list
 * @h: head of the list
 * Return: total number of nodes in the list
 */

size_t print_list(const list_t *h)
{
        int i;

        if (h == NULL)
                return (0);

        for (i = 1; h->next != NULL; i++)
        {
                if (h->str == NULL)
                        printf("[%lu] %s\n", h->len, "(nil)");
                else
                {
                        printf("[%lu] %s\n", h->len, h->str);

                }
                h = h->next;

        }
        printf("[%lu] %s\n", h->len, h->str);
        return (i);

}


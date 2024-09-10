#include "lists.h"

/**
 * print dlists print out all element of a
 *
 * dlists_t list
 * @head : head of the list
 * return the number of node
 * 
 * */

size_t print_dlistint(const dlistint_t *h)
{
		int count;

			count = 0;

				if (h == NULL)
							return (count);

					while (h->prev != NULL)
								h = h->prev;

						while (h != NULL)
								{
											printf("%d\n", h->n);
													count++;
															h = h->next;
																}

						
							return (count);
}

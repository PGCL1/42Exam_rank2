#include <stdlib.h>
#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int	swap;
	t_list	*tmp;

	/* Saving the first node of the list in a temporary variable. */
	tmp = lst;
	/* Checking if the next node is NULL. */
	while (lst->next != NULL)
	{
		/* Calling the function cmp and passing the data of the current node and the next
		node. */
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			/* Swapping the data of the current node with the next node. */
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			/* Resetting the pointer to the first node of the list. */
			lst = tmp;
		}
		/* Moving the pointer to the next node. */
		else
			lst = lst->next;
	}
	/* Resetting the pointer to the first node of the list. */
	lst = tmp;
	/* Returning the pointer to the first node of the list. */
	return (lst);
}
/*
Assignment name  : sort_list
Expected files   : sort_list.c
Allowed functions: 
--------------------------------------------------------------------------------

Write the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function 
pointer cmp to select the order to apply, and returns a pointer to the 
first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h 
that is provided to you. You must include that file 
(#include "list.h"), but you must not turn it in. We will use our own 
to compile your assignment.

Functions passed as cmp will always return a value different from 
0 if a and b are in the right order, 0 otherwise.

For example, the following function used as cmp will sort the list 
in ascending order:

int ascending(int a, int b)
{
	return (a <= b);
}

*/

#include "list.h"
#include <stddef.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *cur;
	int	temp;
	int	swapped = 1;
	
	cur = lst;
	while (swapped == 1)
	{
		swapped = 0;
		while (cur != 0 && cur->next != 0)
		{
			if ((*cmp)(cur->data, cur->next->data) == 0)
			{
				temp = cur->data;
				cur->data = cur->next->data;
				cur->next->data = temp;
				swapped = 1;
			}
			cur = cur->next;
		}
		cur = lst;
	}
	return (lst);
}

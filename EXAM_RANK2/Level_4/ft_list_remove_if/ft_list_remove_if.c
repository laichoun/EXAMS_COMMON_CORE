

#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *cur;

	//1° check que begin list et *begin list sont ≠ null
	if (begin_list == NULL || *begin_list == NULL)
		return ;
	cur = begin_list;
	if ((*cmp)(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
	{
		 *begin_list = cur->next;
		 ft_list_remove_if(&cur->next, data_ref, cmp);
	}
}

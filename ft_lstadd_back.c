
#include <stdlib.h>

typedef struct	s_list
{
	void	*content;
	struct	s_list *next;
}				t_list;

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *cur;

    if (*lst == NULL)
    {
	*lst = new;
	return;
    }
    cur = *lst;
    while (cur->next != NULL)
	cur = cur->next;
    cur->next = new;
}

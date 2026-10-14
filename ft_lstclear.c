
#include <stdlib.h>

typedef struct	s_list
{
	void	*content;
	struct	s_list *next;
}				t_list;

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *next;

    if (lst == NULL || *lst == NULL || del == NULL)
	return;
    while (*lst != NULL)
    {
	del((*lst)->content);
	next = (*lst)->next;
	free(*lst);
	*lst = next;
    }
}

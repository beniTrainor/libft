
#include <stdlib.h>

typedef struct	s_list
{
	void	*content;
	struct	s_list *next;
}				t_list;


void	ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (lst == NULL)
	return;
    while (lst != NULL)
    {
	f(lst->content);
	lst = lst->next;
    }
}

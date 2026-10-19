/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 20:31:36 by btrainor          #+#    #+#             */
/*   Updated: 2026/10/19 19:04:25 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elm;
	t_list	*tmp;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		new_elm = ft_lstnew(f(lst->content));
		if (new_elm == NULL)
		{
			while (new_lst != NULL)
			{
				tmp = new_lst->next;
				del(new_lst->content);
				free(new_lst);
				new_lst = tmp;
			}
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elm);
		lst = lst->next;
	}
	return (new_lst);
}

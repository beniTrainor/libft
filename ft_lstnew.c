/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 20:57:28 by btrainor          #+#    #+#             */
/*   Updated: 2026/10/13 19:37:25 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct	s_list
{
	void	*content;
	struct	s_list *next;
}				t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst->content = content;
	lst->next = NULL;

	return (lst);
}

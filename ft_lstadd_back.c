/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 17:11:45 by btrainor          #+#    #+#             */
/*   Updated: 2026/10/16 17:13:10 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	cur = *lst;
	while (cur->next != NULL)
		cur = cur->next;
	cur->next = new;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 20:07:54 by btrainor          #+#    #+#             */
/*   Updated: 2026/10/16 17:17:49 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	size;	

	if (lst == NULL)
		return (0);
	size = 1;
	while (lst->next != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

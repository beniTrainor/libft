/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:41:44 by btrainor          #+#    #+#             */
/*   Updated: 2026/09/29 17:09:23 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>

static int	islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_toupper(int c)
{
	if (islower(c))
		return (c - ('a' - 'A'));
	return (c);
}

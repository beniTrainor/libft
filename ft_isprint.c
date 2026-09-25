/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 17:14:21 by btrainor          #+#    #+#             */
/*   Updated: 2026/09/25 17:17:11 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>

int	ft_isprint(int c)
{
	return ((c >= ' ' && c <= '~'));	
}

int	main(void)
{
	assert(ft_isprint('w') == 1);
	assert(ft_isprint('.') == 1);
	assert(ft_isprint('~') == 1);
	assert(ft_isprint(' ') == 1);
	assert(ft_isprint('\x7F') == 0);
}

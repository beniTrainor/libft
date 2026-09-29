/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 16:49:01 by btrainor          #+#    #+#             */
/*   Updated: 2026/09/28 15:57:15 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <assert.h>

int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}

//int	main(void)
//{
//	assert(ft_isalnum('a') == 1);
//	assert(ft_isalnum('A') == 1);
//	assert(ft_isalnum('!') == 0);
//	assert(ft_isalnum('3') == 1);
//	assert(ft_isalnum('Z') == 1);
//}

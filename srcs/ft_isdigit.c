/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 16:43:26 by btrainor          #+#    #+#             */
/*   Updated: 2026/09/25 16:47:31 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <assert.h>

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}

//int	main(void)
//{
//	assert(ft_isdigit('a') == 0);
//	assert(ft_isdigit('1') == 1);
//	assert(ft_isdigit('9') == 1);
//	assert(ft_isdigit('!') == 0);
//}

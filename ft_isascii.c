/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 16:57:58 by btrainor          #+#    #+#             */
/*   Updated: 2026/09/25 17:10:08 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <assert.h>

int	ft_isascii(int c)
{
	return ((unsigned char)c >= '\0' && (unsigned char)c <= '\x7F');
}

//int	main(void)
//{
//	assert(ft_isascii('a') == 1);
//	assert(ft_isascii('!') == 1);
//	assert(ft_isascii('?') == 1);
//	assert(ft_isascii('\x8F') == 0);
//	assert(ft_isascii('\x8c') == 0);
//}

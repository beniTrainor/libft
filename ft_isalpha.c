/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 16:36:43 by btrainor          #+#    #+#             */
/*   Updated: 2026/09/25 16:42:21 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <assert.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

//int	main(void)
//{
//	assert(ft_isalpha('b') == 1);
//	assert(ft_isalpha('!') == 0);
//	assert(ft_isalpha('!') == 0);
//}

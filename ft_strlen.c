/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 17:51:21 by btrainor          #+#    #+#             */
/*   Updated: 2026/09/30 17:05:01 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <assert.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

//int	main(void)
//{
//	assert(ft_strlen("") == 0);
//	assert(ft_strlen("a") == 1);
//	assert(ft_strlen("ab") == 2);
//	assert(ft_strlen("abc") == 3);
//}

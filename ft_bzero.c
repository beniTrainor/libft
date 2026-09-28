/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:14:16 by btrainor          #+#    #+#             */
/*   Updated: 2026/09/28 18:11:43 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <assert.h>


void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

//int	main(void)
//{
//	void *s = malloc(10);
//	if (s == NULL)
//		return (0);	
//	((int *)s)[0] = 12;
//	((int *)s)[1] = 32;
//	ft_bzero(s, 2);
//	assert(((char *)s)[0] == '\0');
//	assert(((char *)s)[1] == '\0');
//	free(s);
//}

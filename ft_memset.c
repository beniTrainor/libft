/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 17:59:11 by btrainor          #+#    #+#             */
/*   Updated: 2026/09/28 15:54:30 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((int *)s)[i] = c;
		i++;
	}
	return (s);
}

//int	main(void)
//{
//	void *v = malloc(10);
//	if (v == NULL)
//		return (0);
//	void *mem = (int*)ft_memset(v, 10, 3);
//	printf("%d\n", ((int*)mem)[0]);
//	free(v);
//	v = NULL;
//	mem = NULL;
//}

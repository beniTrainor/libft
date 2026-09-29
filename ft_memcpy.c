/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:12:39 by btrainor          #+#    #+#             */
/*   Updated: 2026/09/29 14:51:15 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((int *)dest)[i] = ((int *)src)[i];
		i++;
	}
	return (dest);
}

//int	main(void)
//{
//	void *dest = malloc(sizeof(void) * 6);	
//	if (dest == NULL)
//		return (0);
//	int	nums[] = {1, 2, 3, 4};
//	const void *src = (void*)&nums;
//	dest = ft_memcpy(dest, src, 3);
//	free(dest);
//}

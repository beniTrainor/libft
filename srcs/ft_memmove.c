/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:54:16 by btrainor          #+#    #+#             */
/*   Updated: 2026/09/29 15:37:09 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

void *ft_memmove(void *dest, const void *src, size_t n)
{
	void *temp;

	temp = malloc(sizeof(void *) * n);
	ft_memcpy(temp, src, n);
	ft_memcpy(dest, temp, n);
	free(temp);
	return (dest);
}

int	main(void)
{
	char	*str = "Hello";
	const void *src;
	void *dest;

	*src = (const void*) &str;
	dest = malloc(sizeof(void *) * 6);
	ft_memmove(dest, src, 6);	
	free(dest);
}

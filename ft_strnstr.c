/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:02:59 by btrainor          #+#    #+#             */
/*   Updated: 2026/10/23 18:00:51 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lenlittle;

	lenlittle = ft_strlen(little);
	if (lenlittle == 0)
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (j < lenlittle && big[i] != '\0' && big[i] == little[j]
			&& i < len)
		{
			j++;
			i++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i - lenlittle]);
		else
			i -= j;
		i++;
	}
	return (NULL);
}

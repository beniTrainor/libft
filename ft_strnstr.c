/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:02:59 by btrainor          #+#    #+#             */
/*   Updated: 2026/10/07 16:51:02 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

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
		while (j < lenlittle && big[i] != '\0' && big[i] == little[j])
		{
			j++;
			i++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i - lenlittle]);
		i++;
	}
	return (NULL);
}

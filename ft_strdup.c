/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:08:43 by btrainor          #+#    #+#             */
/*   Updated: 2026/10/16 17:40:38 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 1;
	while (src[i - 1] != '\0')
	{
		dst[i - 1] = src[i - 1];
		i++;
	}
	dst[i - 1] = '\0';
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, s);
	return (dup);
}

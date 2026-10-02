/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:51:51 by btrainor          #+#    #+#             */
/*   Updated: 2026/09/30 18:59:15 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	i;

	if (siz == 0)
	    return (ft_strlen(src));
	i = 1;
	while ((i < siz) && src[i - 1] != '\0')
	{
	    dst[i - 1] = src[i - 1];
	    i++;
	}
	dst[i - 1] = '\0';
	return (ft_strlen(src));
}

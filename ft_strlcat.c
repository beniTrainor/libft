/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:26:52 by btrainor          #+#    #+#             */
/*   Updated: 2026/10/05 18:27:43 by btrainor         ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;

	i = 0;
	while (i < size && dst[i] != '\0')
		i++;
	destlen = i;
	if (destlen == size)
		return (size + ft_strlen(src));
	while ((i < size) && src[i - destlen] != '\0')
	{
		dst[i] = src[i - destlen];
		i++;
	}
	dst[i] = '\0';
	return (destlen + ft_strlen(src));
}

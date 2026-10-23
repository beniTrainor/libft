/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:26:52 by btrainor          #+#    #+#             */
/*   Updated: 2026/10/23 13:29:39 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	destlen;

	i = 0;
	while (i < siz && dst[i] != '\0')
		i++;
	destlen = i;
	if (destlen == siz)
		return (siz + ft_strlen(src));
	while ((i < siz) && src[i - destlen] != '\0')
	{
		dst[i] = src[i - destlen];
		i++;
	}
	if (i < siz && src[i - destlen] == '\0')
		dst[i] = '\0';
	else
		dst[i - 1] = '\0';
	return (destlen + ft_strlen(src));
}

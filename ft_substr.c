/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 17:48:52 by btrainor          #+#    #+#             */
/*   Updated: 2026/10/16 18:25:50 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	slen;
	size_t	sslen;

	slen = ft_strlen(s);
	if (start >= slen)	
		return (ft_strdup(""));
	sslen = slen - start;
	if (sslen > len)
		sslen = len;
	sub = malloc(sizeof(char) * (sslen + 1));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < sslen)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

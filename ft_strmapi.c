/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:11:24 by btrainor          #+#    #+#             */
/*   Updated: 2026/10/05 18:12:38 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*m;

	len = ft_strlen(s);
	m = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		m[i] = f((unsigned int)i, s[i]);
		i++;
	}
	m[i] = '\0';
	return (m);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:11:24 by btrainor          #+#    #+#             */
/*   Updated: 2026/10/23 18:41:56 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*m;

	len = ft_strlen(s);
	m = malloc(sizeof(char) * (len + 1));
	if (m == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		m[i] = f((unsigned int)i, s[i]);
		i++;
	}
	m[i] = '\0';
	return (m);
}

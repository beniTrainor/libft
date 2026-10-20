/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:11:24 by btrainor          #+#    #+#             */
/*   Updated: 2026/10/16 17:42:58 by btrainor         ###   ########.fr       */
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
	i = 0;
	while (i < len)
	{
		m[i] = f((unsigned int)i, s[i]);
		i++;
	}
	m[i] = '\0';
	return (m);
}

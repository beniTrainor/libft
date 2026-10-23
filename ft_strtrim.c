/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 18:34:32 by btrainor          #+#    #+#             */
/*   Updated: 2026/10/23 17:43:29 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(const char c, char const *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static size_t	find_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && is_in_set(s1[i], set))
		i++;
	return (i);
}

static size_t	find_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	i = len - 1;
	while (i > 0 && is_in_set(s1[i], set))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;
	size_t	i;

	start = find_start(s1, set);
	if (s1[start] == '\0')
		return (ft_strdup(""));
	end = find_end(s1, set) + 1;
	res = malloc(sizeof(char) * (end - start + 1));
	if (res == NULL)
		return (NULL);
	i = start;
	while (i < end)
	{
		res[i - start] = s1[i];
		i++;
	}
	res[i - start] = '\0';
	return (res);
}

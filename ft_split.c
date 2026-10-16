/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:31:20 by btrainor          #+#    #+#             */
/*   Updated: 2026/10/16 20:19:20 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_tokens(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			count++;	
			while (*s != c && *s != '\0')
				s++;	
		}
		else
			s++;
	}
	return (count);
}

static void	free_substrings(char **subs, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(subs[i]);
		i++;
	}
	free(subs);
}

static char		**create_substrings(char const *s, char c, size_t count)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	res = malloc(sizeof(char *) * (count + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = i;
			while (s[j] != c && s[j] != '\0')
				j++;
			res[k] = ft_substr(s, i, j - i);
			if (res[k] == NULL)
			{
				free_substrings(res, k);
				return (NULL);
			}	
			k++;
			i = j;
		}
		else
			i++;
	}
	res[count] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	count;	

	if (!s)
		return (NULL);
	count = count_tokens(s, c);
	res = create_substrings(s, c, count);
	return (res);
}

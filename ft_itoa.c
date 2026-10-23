/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:02:19 by btrainor          #+#    #+#             */
/*   Updated: 2026/10/23 16:57:12 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	counter;

	counter = 0;
	if (n < 0 && n > INT_MIN)
		n *= -1;
	else if (n == INT_MIN)
		return (10);
	while (n > 0)
	{
		counter++;
		n /= 10;
	}
	if (counter == 0)
		return (1);
	return (counter);
}

static char	*ft_reverse(char *s)
{
	size_t	len;
	size_t	i;
	char	c;

	len = ft_strlen(s);
	i = 0;
	while (i < (len / 2))
	{
		c = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = c;
		i++;
	}
	return (s);
}

static char	*ft_fill(char *s, long nl)
{
	int	sign;
	int	i;

	sign = 1;
	if (nl < 0)
	{
		sign = -1;
		nl *= -1;
	}
	else if (nl == 0)
		s[0] = '0';
	i = 0;
	while (nl > 0)
	{
		s[i++] = nl % 10 + '0';
		nl /= 10;
	}
	if (sign == -1)
		s[i] = '-';
	s[i + 1] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	long	nl;

	nl = n;
	len = count_digits(n);
	if (nl < 0)
		len++;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	s = ft_fill(s, nl);
	s = ft_reverse(s);
	return (s);
}

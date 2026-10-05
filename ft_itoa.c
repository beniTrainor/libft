/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:02:19 by btrainor          #+#    #+#             */
/*   Updated: 2026/10/05 18:06:47 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_digits(int n)
{
	int	counter;

	counter = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		counter++;
		n /= 10;
	}
	if (counter == 0)
		return (1);
	return (counter);
}

static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_reverse(char *s)
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

char	*ft_fill(char *s, long nl)
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
	len = count_digits(n) + 1;
	if (nl < 0)
		len++;
	s = malloc(sizeof(char) * len);
	s = ft_fill(s, nl);
	s = ft_reverse(s);
	return (s);
}

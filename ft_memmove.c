/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:54:16 by btrainor          #+#    #+#             */
/*   Updated: 2026/09/30 17:23:27 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;

    if (dest < src)
    {
	i = 0;
	while (i < n)
	{
	    ((char *)dest)[i] = ((char *)src)[i];
	    i++;
	}
    }
    else
    {
	i = n;
	while (i > 0)
	{
	    ((char *)dest)[i - 1] = ((char *)src)[i - 1];
	    i--;
	}
    }
    return (dest);
}

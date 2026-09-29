/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrainor <btrainor@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:41:44 by btrainor          #+#    #+#             */
/*   Updated: 2026/09/29 15:48:45 by btrainor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <assert.h>

int	islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	toupper(int c)
{
	if (islower(c))
		return (c - ('a' - 'A'));
	return (c);
}

//int	main(void)
//{
//	assert(islower('a') == 1);
//	assert(islower('A') == 0);
//	assert(toupper('a') == 'A');
//	assert(toupper('Z') == 'Z');
//	assert(toupper('$') == '$');
//}

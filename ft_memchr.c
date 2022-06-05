/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:28:14 by cbourajl          #+#    #+#             */
/*   Updated: 2021/11/05 12:24:10 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	k;
	unsigned char	*s;

	i = 0;
	k = (unsigned char)c;
	s = (unsigned char *)str;
	while (i < n)
	{
		if (s[i] == k)
			return (s + i);
		i++;
	}
	return (0);
}

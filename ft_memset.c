/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:38:53 by cbourajl          #+#    #+#             */
/*   Updated: 2021/11/22 04:01:46 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	b;
	unsigned char	*s;
	size_t			i;

	b = (unsigned char)c;
	s = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (str);
}

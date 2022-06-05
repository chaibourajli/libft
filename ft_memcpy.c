/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:11:37 by cbourajl          #+#    #+#             */
/*   Updated: 2021/11/05 15:30:41 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*k;

	if (!src && !dst)
		return (NULL);
	k = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while (i < size)
	{
		k[i] = s[i];
		i++;
	}
	return (k);
}

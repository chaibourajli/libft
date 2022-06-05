/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:55:06 by cbourajl          #+#    #+#             */
/*   Updated: 2021/11/16 22:08:32 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	l;
	size_t	j;
	size_t	i;

	j = 0;
	l = ft_strlen(src);
	while (dst[j] != '\0' && j < dstsize)
		j++;
	i = 0;
	dstsize = dstsize - j;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i + j] = src[i];
			i++;
		}
		dst[i + j] = '\0';
	}
	return (j + l);
}

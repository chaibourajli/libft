/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:59:53 by cbourajl          #+#    #+#             */
/*   Updated: 2021/11/04 20:09:50 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*s;
	char	c1;

	i = 0;
	s = (char *)str;
	c1 = (char)c;
	while (s[i])
	{
		if (s[i] == c1)
			return (s + i);
		i++;
	}
	if (c1 == '\0')
		return (s + i);
	return (0);
}

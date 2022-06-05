/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:10:36 by cbourajl          #+#    #+#             */
/*   Updated: 2021/11/04 20:25:15 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		l;
	char	*s;
	char	c1;

	l = ft_strlen(str);
	s = (char *)str;
	c1 = (char)c;
	while (l >= 0)
	{
		if (s[l] == c1)
			return (s + l);
		l--;
	}
	return (0);
}

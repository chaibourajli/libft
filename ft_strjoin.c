/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:20:47 by cbourajl          #+#    #+#             */
/*   Updated: 2021/11/06 16:15:04 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	if (s1 && s2)
	{
		i = ft_strlen(s1);
		j = ft_strlen(s2);
		k = -1;
		res = (char *)malloc(i + j + 1);
		if (!res)
			return (NULL);
		while (s1[++k])
			res[k] = s1[k];
		k = -1;
		while (s2[++k])
		{
			res[i] = s2[k];
			i++;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:34:15 by cbourajl          #+#    #+#             */
/*   Updated: 2021/11/16 21:53:41 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count(long nb)
{
	int		count;
	long	stk;

	stk = nb;
	count = 0;
	if (stk == 0)
		return (1);
	if (stk < 0)
	{
		count = 1;
		stk *= -1;
	}
	while (stk > 0)
	{
		stk /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*stoi;
	long	stk;
	long	count;

	stk = n;
	count = ft_count(stk);
	stoi = (char *)malloc(count + 1);
	if (!stoi)
		return (NULL);
	if (stk < 0)
	{
		stoi[0] = '-';
		stk *= -1;
	}
	stoi[count] = '\0';
	count--;
	while (stk >= 0)
	{
		stoi[count] = stk % 10 + '0';
		stk /= 10;
		count--;
		if (stk == 0)
			break ;
	}
	return (stoi);
}

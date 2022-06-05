/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:28:06 by cbourajl          #+#    #+#             */
/*   Updated: 2021/11/05 20:43:44 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	s;

	s = count * size;
	p = (char *)malloc(s);
	if (!p)
		return (NULL);
	ft_bzero (p, s);
	return (p);
}

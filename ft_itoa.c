/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 13:44:18 by vduche            #+#    #+#             */
/*   Updated: 2016/11/20 11:09:12 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countnb(long n)
{
	size_t	i;

	i = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	size_t	i;
	char	neg;
	char	*tp;
	long	nb;

	nb = n;
	i = countnb(nb);
	neg = (nb < 0 ? 1 : 0);
	tp = ft_strnew(neg + i);
	if (tp == NULL)
		return (NULL);
	if (neg)
	{
		nb = -nb;
		tp[0] = '-';
	}
	while (i > 0)
	{
		tp[neg + i - 1] = (nb % 10) + '0';
		i--;
		nb /= 10;
	}
	return (tp);
}

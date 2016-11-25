/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 13:20:38 by vduche            #+#    #+#             */
/*   Updated: 2016/11/23 06:29:01 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		nb;
	int		neg;

	nb = 0;
	neg = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\f' || *str == '\v' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = 1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (neg ? -nb : nb);
}

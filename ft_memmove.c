/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:16:02 by vduche            #+#    #+#             */
/*   Updated: 2016/11/23 08:13:52 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tp_s1;
	unsigned char	*tp_s2;

	tp_s1 = (unsigned char *)s1;
	tp_s2 = (unsigned char *)s2;
	i = 0;
	if (tp_s1 > tp_s2)
	{
		while (i < n)
		{
			tp_s1[n - 1] = tp_s2[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			tp_s1[i] = tp_s2[i];
			i++;
		}
	}
	return (s1);
}

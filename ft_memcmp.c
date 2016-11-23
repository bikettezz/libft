/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:11:04 by vduche            #+#    #+#             */
/*   Updated: 2016/11/23 06:37:12 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	unsigned char	*tp_s1;
	unsigned char	*tp_s2;
	size_t			i;

	tp_s1 = (unsigned char *)s1;
	tp_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (tp_s1[i] != tp_s2[i])
			return (tp_s1[i] - tp_s2[i]);
		i++;
	}
	return (0);
}

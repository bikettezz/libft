/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:09:14 by vduche            #+#    #+#             */
/*   Updated: 2016/11/23 06:34:26 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tp;

	i = 0;
	tp = (unsigned char *)s;
	while (i < n)
	{
		if (tp[i] == (unsigned char)c)
			return (tp + i);
		i++;
	}
	return (NULL);
}

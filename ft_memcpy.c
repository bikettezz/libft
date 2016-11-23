/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:13:12 by vduche            #+#    #+#             */
/*   Updated: 2016/11/23 06:38:03 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, void const *s2, size_t n)
{
	size_t	i;
	char	*tp_s1;
	char	*tp_s2;

	i = 0;
	tp_s1 = (char *)s1;
	tp_s2 = (char *)s2;
	while (i < n)
	{
		tp_s1[i] = tp_s2[i];
		i++;
	}
	return ((void*)s1);
}

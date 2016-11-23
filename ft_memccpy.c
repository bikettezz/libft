/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:05:38 by vduche            #+#    #+#             */
/*   Updated: 2016/11/23 06:34:54 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
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
		if ((char)c == tp_s1[i])
			return ((void*)&tp_s1[i + 1]);
		i++;
	}
	return (NULL);
}

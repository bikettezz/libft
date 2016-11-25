/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:50:13 by vduche            #+#    #+#             */
/*   Updated: 2016/11/23 06:56:41 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(s2);
	while (s1[i] && (i < n))
		i++;
	if (n > 0)
		while ((i < n - 1) && s2[j])
			s1[i++] = s2[j++];
	if (j > 0)
	{
		s1[i] = 0;
		return (len + i - j);
	}
	return (len + i);
}

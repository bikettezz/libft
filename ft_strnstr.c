/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:03:27 by vduche            #+#    #+#             */
/*   Updated: 2016/11/23 08:08:01 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *search, size_t n)
{
	size_t	i;

	if (!*search)
		return ((char *)s1);
	i = ft_strlen(search);
	while (*s1 && n-- >= i)
	{
		if (!(ft_strncmp(s1, search, i)))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:42:02 by vduche            #+#    #+#             */
/*   Updated: 2016/11/16 18:11:18 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s1)
{
	char	*s2;
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(s1);
	if (!(s2 = (char*)malloc(sizeof(*s2) * n + 1)))
		return (NULL);
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

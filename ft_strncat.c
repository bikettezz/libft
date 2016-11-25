/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:58:01 by vduche            #+#    #+#             */
/*   Updated: 2016/11/23 07:00:30 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, char const *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*tp_s1;
	char	*tp_s2;

	tp_s1 = (char*)s1;
	tp_s2 = (char*)s2;
	i = 0;
	j = 0;
	while (tp_s1[i])
		i++;
	while (tp_s2[j] && j < n)
	{
		tp_s1[i] = tp_s2[j];
		i++;
		j++;
	}
	tp_s1[i] = '\0';
	return (tp_s1);
}

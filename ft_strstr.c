/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:11:48 by vduche            #+#    #+#             */
/*   Updated: 2016/11/20 10:52:17 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *search)
{
	int		i;
	int		j;
	char	*tp;

	tp = (char*)s1;
	i = 0;
	if (!*search)
		return (tp);
	while (tp[i])
	{
		j = 0;
		while (search[j] == tp[i + j])
		{
			if (!(search[j + 1]))
				return (tp + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

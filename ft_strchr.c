/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:35:16 by vduche            #+#    #+#             */
/*   Updated: 2016/11/23 06:45:41 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int i)
{
	char	*tp;

	tp = (char *)s;
	while (*tp)
	{
		if (*tp == (char)i)
			return (tp);
		tp++;
	}
	if ((char)i == 0)
		return (tp);
	return (NULL);
}

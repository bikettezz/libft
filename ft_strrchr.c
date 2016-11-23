/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:05:41 by vduche            #+#    #+#             */
/*   Updated: 2016/11/23 07:34:01 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int i)
{
	char *tp;

	tp = (char *)s;
	while (*tp)
		tp++;
	while (tp >= s)
	{
		if (*tp == (char)i)
			return (tp);
		tp--;
	}
	return (NULL);
}

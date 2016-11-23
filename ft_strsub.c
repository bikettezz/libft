/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:13:24 by vduche            #+#    #+#             */
/*   Updated: 2016/11/21 11:27:17 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*freshstr;

	i = 0;
	freshstr = ft_strnew(len);
	if (freshstr == NULL || s == NULL)
		return (NULL);
	while (i < len)
	{
		freshstr[i] = s[start + i];
		i++;
	}
	return (freshstr);
}

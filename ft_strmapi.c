/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:56:00 by vduche            #+#    #+#             */
/*   Updated: 2016/11/21 11:51:54 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*freshstr;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	freshstr = ft_strnew(ft_strlen(s));
	if (freshstr == NULL)
		return (NULL);
	while (s[i])
	{
		freshstr[i] = (*f)(i, s[i]);
		i++;
	}
	return (freshstr);
}

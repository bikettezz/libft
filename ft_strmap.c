/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:53:44 by vduche            #+#    #+#             */
/*   Updated: 2016/11/21 11:51:30 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
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
		freshstr[i] = (*f)(s[i]);
		i++;
	}
	return (freshstr);
}

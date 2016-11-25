/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:15:43 by vduche            #+#    #+#             */
/*   Updated: 2016/11/21 11:42:54 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char const	*endstr;

	if (s == NULL)
		return (NULL);
	endstr = s + ft_strlen(s) - 1;
	if (endstr == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	while (*endstr == ' ' || *endstr == '\n' || *endstr == '\t')
		endstr--;
	return (ft_strsub(s, 0, endstr - s + 1));
}

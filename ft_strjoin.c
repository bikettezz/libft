/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:48:32 by vduche            #+#    #+#             */
/*   Updated: 2016/11/21 11:37:04 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tp;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	tp = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (tp == NULL)
		return (NULL);
	ft_strcpy(tp, s1);
	ft_strcat(tp, s2);
	return (tp);
}

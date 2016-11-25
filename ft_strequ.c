/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:43:48 by vduche            #+#    #+#             */
/*   Updated: 2016/11/21 12:01:50 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	char	*tp_s1;
	char	*tp_s2;

	if (!s1 || !s2)
		return (0);
	tp_s1 = (char *)s1;
	tp_s2 = (char *)s2;
	if (ft_strcmp(tp_s1, tp_s2) == 0)
		return (1);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:53:42 by vduche            #+#    #+#             */
/*   Updated: 2016/11/21 11:58:28 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*tp_s1;
	char	*tp_s2;

	if (!s1 || !s2)
		return (0);
	tp_s1 = (char *)s1;
	tp_s2 = (char *)s2;
	if (ft_strncmp(tp_s1, tp_s2, n) == 0)
		return (1);
	else
		return (0);
}

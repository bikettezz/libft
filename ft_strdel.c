/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:40:57 by vduche            #+#    #+#             */
/*   Updated: 2016/11/21 09:46:26 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **s)
{
	if (s && *s)
	{
		free(*s);
		*s = NULL;
	}
}

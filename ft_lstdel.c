/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 08:42:21 by vduche            #+#    #+#             */
/*   Updated: 2016/11/25 10:00:29 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*n;
	t_list	*next;
	t_list	**t;

	if (alst)
	{
		n = *alst;
		while (n)
		{
			next = n->next;
			t = &n;
			ft_lstdelone(t, del);
			n = next;
		}
		*alst = NULL;
	}
}

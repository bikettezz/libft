/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 08:53:05 by vduche            #+#    #+#             */
/*   Updated: 2016/11/25 09:57:40 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*t;

	if (f && lst)
	{
		new = f(lst);
		if (new)
		{
			t = new;
			while (lst->next)
			{
				lst = lst->next;
				new->next = f(lst);
				new = new->next;
				if (!new)
					return (NULL);
			}
			return (t);
		}
	}
	return (NULL);
}

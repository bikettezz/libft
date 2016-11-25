/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 16:20:36 by vduche            #+#    #+#             */
/*   Updated: 2016/11/23 16:31:23 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*elem;

	elem = (t_list *)ft_memalloc(sizeof(t_list));
	if (elem == NULL)
		return (NULL);
	if (content == NULL)
	{
		content_size = 0;
		elem->content = NULL;
	}
	else
	{
		elem->content = ft_memalloc(content_size);
		if (elem->content == NULL)
		{
			ft_memdel((void **)&elem);
			return (NULL);
		}
		ft_memcpy(elem->content, content, content_size);
	}
	elem->content_size = content_size;
	elem->next = NULL;
	return (elem);
}

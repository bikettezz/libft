/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:07:47 by vduche            #+#    #+#             */
/*   Updated: 2016/11/21 11:59:58 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nword(char const *s, char c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	return (i);
}

static char	*ft_lenword(char const *s, char c)
{
	char	*word;
	int		i;
	int		n;

	n = 0;
	i = 0;
	if (!s)
		return (0);
	word = (char *)malloc(sizeof(char) * n + 1);
	while (s[n] && s[n] != c)
		n++;
	while (i < n)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		nword;
	int		i;

	if (!s)
		return (0);
	nword = ft_nword(s, c);
	i = 0;
	if (!s || !(tab = (char **)malloc(sizeof(char *) * (nword + 1))))
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			tab[i] = ft_lenword(s, c);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	tab[i] = NULL;
	return (tab);
}

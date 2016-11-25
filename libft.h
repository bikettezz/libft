/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 13:02:51 by vduche            #+#    #+#             */
/*   Updated: 2016/11/24 09:05:47 by vduche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list				*ft_lstnew(void const *content, size_t content_size);
int					ft_atoi(char const *c);
int					ft_isalnum(int i);
int					ft_isalpha(int i);
int					ft_isascii(int i);
int					ft_isdigit(int i);
int					ft_isprint(int i);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
char				*ft_strcat(char *s1, char const *s2);
char				*ft_strchr(char const *s, int i);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *s1, char const *s2);
char				*ft_strdup(char const *s1);
size_t				ft_strlcat(char *s1, char const *s2, size_t n);
size_t				ft_strlen(char const *str);
char				*ft_strncat(char *s1, char const *s2, size_t n);
int					ft_strncmp(char const *s1, char const *s2, size_t n);
char				*ft_strncpy(char *s1, char const *s2, size_t n);
char				*ft_strnstr(char const *src, char const *search, size_t n);
char				*ft_strrchr(char const *s, int i);
char				*ft_strstr(char const *src, char const *search);
int					ft_tolower(int i);
int					ft_toupper(int i);
void				ft_bzero(void *s, size_t n);
void				*ft_memccpy(void *s1, void const *s2, int c, size_t n);
void				*ft_memcpy(void *s1, void const *s2, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_memmove(void *s1, const void *s2, size_t n);
void				*ft_memchr(void const *s, int c, size_t n);
int					ft_memcmp(void const *s1, void const *s2, size_t n);
void				*ft_memalloc(size_t n);
void				ft_memdel(void **n);
char				*ft_strnew(size_t n);
void				ft_strdel(char **s);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char*));
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);

#endif

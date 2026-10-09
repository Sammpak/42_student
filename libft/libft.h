/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 18:45:42 by mavautie          #+#    #+#             */
/*   Updated: 2026/10/09 15:34:09 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc( size_t num, size_t size );
int		ft_isalnum(int str);
int		ft_isalpha(int str);
int		ft_isascii(int str);
int		ft_isdigit(int str);
int		ft_isprint(int str);
void 	*ft_memchr(const void *s, int c, size_t n);
int 	ft_memcmp(const void *s1, const void *s2, size_t n);
void 	*ft_memcpy(void *dest, const void *src, size_t n);
void 	*ft_memmove(void *dest, const void *src, size_t n);
void 	*ft_memset ( void * ptr, int value, size_t num );
char 	*ft_strchr(const char *s, int c);
char 	*ft_strdup(const char *s);
size_t	strlcat(char *dst, const char *src, size_t dstsize);
size_t 	ft_strlcpy(char *  dest , const char *  src , size_t  size );
int		ft_strlen(const char *str);
int 	ft_strncmp(const char *s1, const char *s2, size_t n);
char 	*ft_strrchr(const char *s, int c);
char 	*ft_strstr(const char *haystack, const char *needle ,size_t n);
int 	ft_tolower(int c);
int 	ft_toupper(int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strlen(const char *str);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
t_list *ft_lstnew(void *content);
unsigned int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstdelone(t_list *lst, void (*del)(void*));
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstclear(t_list **lst, void (*del)(void *));

#endif
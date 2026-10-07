/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:12:37 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/07 13:15:46 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	char *tmp_s;
	int i;
	tmp_s = (char *) s;
	i = 0;
	while(*tmp_s)
	{
		if(i > n)
			return NULL;
		if(*tmp_s == c)
			return tmp_s;
		i++;
		tmp_s++;
	}
	return tmp_s;
}

#include <stdio.h>

int main()
{
	printf(" \n				[ ft_memchr.c ]				");

	char s[] = "Hello le monde, je suis Samuel !";
	char s2[] = "123456789";

	char *result;
	int c;
	int n;
	
	n = 10;
	c = 'm';
	result = ft_memchr(s, c, n);
	printf("\n Testing with (%c) and n(%d) : Result (%s) : Expected (monde, je suis Samuel !)", c, n, result);

	n = 10;
	c = '3';
	result = ft_memchr(s2, c, n);
	printf("\n Testing with (%c) and n(%d) : Result (%s) : Expected (3456789)", c, n, result);
	
	n = 3;
	c = '7';
	result = ft_memchr(s2, c, n);
	printf("\n Testing with (%c) and n(%d) : Result (%s) : Expected ((null))", c, n, result);

	return (0);
}
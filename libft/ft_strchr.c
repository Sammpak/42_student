/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 10:33:57 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/07 15:04:28 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strchr(const char *s, int c)
{
	int i;
	int j;
	i = 0;
	j = 0;
	
	while(*s)
	{
		if(*s == c)
		{
			return (char *) s;
		}
		s++;
	}
	return NULL;
}

// #include <stdio.h>

// int main()
// {

// 	char s[] = "Hello le monde, je suis Samuel !";
// 	char s2[] = "Hello le monde, je suis Samuel !";
// 	char s3[] = "Hello le monde, je suis Samuel !";

// 	char *result;
// 	char c;

// 	c = 'm';
// 	result = ft_strchr(s, c);
// 	printf("\n Testing with (%c) : Result (%s) : Expected (monde, je suis Samuel !)", c, result);

// 	c = 'S';
// 	result = ft_strchr(s, c);
// 	printf("\n Testing with (%c) : Result (%s) : Expected (Samuel !)", c, result);

// 	c = 's';
// 	result = ft_strchr(s2, c);
// 	printf("\n Testing with (%c) : Result (%s) : Expected (suis Samuel !)", c, result);

// 	c = 'z';
// 	result = ft_strchr(s3, c);
// 	printf("\n Testing with (%c) : Result (%s) : Expected ((null))", c, result);
// }
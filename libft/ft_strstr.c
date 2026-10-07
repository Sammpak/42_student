/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 12:49:20 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/07 13:14:36 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strstr(const char *haystack, const char *needle ,size_t n)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	
	while(haystack[i])
	{
		if(i > n)
			return 0;
		if(haystack[i] == needle[j])
		{
			while(needle[j])
			{
				if(needle[j] == haystack[i])
				{
					if(!needle[j + 1])
						return (char *) haystack + i - j;
				}
				j++;
				i++;
			}
			i = i - j;
			j = 0;
		}
		i++;
	}
	return 0;

	
}

#include <stdio.h>

int	main(void)
{
	printf(" \n				[ ft_strstr.c ]				");

	char	str[] = "The rain in Spain falls mainly on the plains";
	char	needle[] = "ain";
	char *result;
	int n = 10;
	printf("\n str (%s) needle (%s) n(%d) : Expected (ain in Spain falls mainly on the plains)", str, needle, n);
	result = ft_strstr(str, needle, n);
	printf(" result : %s", result);

	n = 4;
	printf("\n str (%s) needle (%s) n(%d) : Expected ((null))", str, needle, n);
	result = ft_strstr(str, needle, n);
	printf(" result : %s", result);
	
	return (0);
}
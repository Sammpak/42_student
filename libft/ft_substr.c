/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:32:44 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/08 11:57:54 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>


char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	size_t i;

	i = 0;
	substr = malloc(sizeof(char) * len);

	if(substr == NULL)
		return NULL;
	
		
	s = s + start;
	while(*s)
	{
		if(i < len)
		{
			substr[i] = *s;
			i++;
			s++;
		} else {
			break;
		}
	}
	substr[i] = '\0';
	return substr;
}

// int main()
// {
// 	char *s;
// 	int from;
// 	int during;
	 
// 	s = "Geekssss";
// 	from = 3;
// 	during = 2;
// 	char *result = ft_substr(s, from, during);
// 	printf("\n Sub (%s) from (%d) during (%d) : Result (%s) : Expected (eks)", s, from, during, result);
	
// 	free(result);
	
// 	s = "Hello world";
// 	from = 0;
// 	during = 100;
// 	result = ft_substr(s, from, during);
// 	printf("\n Sub (%s) from (%d) during (%d) : Result (%s) : Expected (Hello world)", s, from, during, result);

// 	free(result);
	
// 	s = "Samuel";
// 	from = 3;
// 	during = 1;
// 	result = ft_substr(s, from, during);
// 	printf("\n Sub (%s) from (%d) during (%d) : Result (%s) : Expected (u)", s, from, during, result);
// }
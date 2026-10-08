/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:55:38 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/08 15:23:05 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *res;
	int len;
	int i;
	int k;
	
	len = ft_strlen(s);
	res = malloc(sizeof(char) * len + 1);
	i = 0;
	k = 0;
	while(s[i])
	{
		res[k] = (*f)(i,s[i]);
		k++;
		i++;
	}
	res[k]  = '\0';
	return res;
}
char test(unsigned int nbr, char str)
{
	(void) nbr;
	return ft_toupper(str);
}
int main()
{
	char *result;
	char *str;
	str = "Hello World";
	
	result = ft_strmapi(str, test);
	printf("\n res %s ", result);
	
}

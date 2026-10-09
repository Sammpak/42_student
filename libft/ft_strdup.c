/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:44:05 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 16:41:08 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*result;

	i = 1;
	while (s[i])
		i++;
	result = malloc(sizeof(char) * i);
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		result[j] = s[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	char	*str = "Hello";
// 	char *result;

// 	result = ft_strdup(str);
// 	printf("\n Testing with (%s) : Result (%s) : Expected (Hello)", str,
//		result);
// 	free(result);

// 	str = "world";
// 	result = ft_strdup(str);
// 	printf("\n Testing with (%s) : Result (%s) : Expected (world)", str,
//		result);
// 	free(result);
// }
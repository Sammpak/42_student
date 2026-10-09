/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:16:53 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 16:43:22 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (size == 0)
	{
		while (dest[i])
			i++;
		return (i);
	}
	while (src[j])
	{
		if (size < j)
			break ;
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[30] = "Hello ";
// 	char	str_2[30] = "Hello ";
// 	char	str_3[30] = "Hello ";

// 	size_t	result;

// 	result = ft_strlcpy(str, "world", 30);
// 	printf("\n Testing with (Hello )
//		+ (world) : Result (%s) : Return (%zu) : Expected (world / 5)", str,
//		result);

// 	result = ft_strlcpy(str_2, "world", 2);
// 	printf("\n Testing with (Hello )
//		+ (world) : Result (%s) : Return (%zu) : Expected (world / 5)", str_2,
//		result);

// 	result = ft_strlcpy(str_3, "a", 9);
// 	printf("\n Testing with (Hello ) + (a),
//		size (9) : Result (%s) : Return (%zu) : Expected (a / 11)", str_3,
//		result);

// 	return (0);
// }

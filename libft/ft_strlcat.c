/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:16:53 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 16:43:04 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	if (i == dstsize)
	{
		while (src[j])
			j++;
		return (dstsize + j);
	}
	while (src[j] && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	while (src[j])
		j++;
	return (i + j);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[30] = "Hello ";
// 	char	str_2[30] = "Hello ";
// 	char	str_3[30] = "Hello ";
// 	char	str_4[30] = "Hello ";
// 	char	str_5[30] = "";
// 	size_t	result;

// 	/* TEST 1 */
// 	result = strlcat(str, "world", 30);
// 	printf("\n Testing with (Hello )
//		+ (world) : Result (%s) : Return (%zu) : Expected (Hello world / 11)",
// 		str, result);

// 	/* TEST 2 */
// 	result = strlcat(str_2, "world", 12);
// 	printf("\n Testing with (Hello )
//		+ (world) : Result (%s) : Return (%zu) : Expected (Hello world / 11)",
// 		str_2, result);

// 	/* TEST 3 : dstsize trop petit */
// 	result = strlcat(str_3, "world", 9);
// 	printf("\n Testing with (Hello ) + (world),
//		size (9) : Result (%s) : Return (%zu) : Expected (Hello wo / 11)",
// 		str_3, result);

// 	/* TEST 4 : dstsize = 0 */
// 	result = strlcat(str_4, "world", 0);
// 	printf("\n Testing with (Hello ) + (world),
//		size (0) : Result (%s) : Return (%zu) : Expected (Hello  / 11)",
// 		str_4, result);

// 	/* TEST 5 : dst vide */
// 	result = strlcat(str_5, "world", 30);
// 	printf("\n Testing with (empty)
//		+ (world) : Result (%s) : Return (%zu) : Expected (world / 5)",
// 		str_5, result);

// 	return (0);
// }

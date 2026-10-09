/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:58:34 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 16:33:55 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*temp_dest;
	const char	*temp_src;
	size_t		i;

	if (dest == src || n == 0)
		return (dest);
	temp_dest = (char *)dest;
	temp_src = (const char *)src;
	if (temp_dest < temp_src)
	{
		i = 0;
		while (i < n)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			temp_dest[n - 1] = temp_src[n - 1];
			n--;
		}
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {

// 	char	str_src[] = "geeks";
// 	char	str_dest[] = "";
// 	printf("\n PTR_SRC (%s) PTR_DEST (%s) : Expected (geeks)", str_src,
//		str_dest);
// 	ft_memmove(str_dest, str_src, sizeof(str_src));
// 	printf(" result : %s", str_dest);

// 	char	str_src_2[] = "world";
// 	char	str_dest_2[] = "hello";
// 	printf("\n PTR_SRC (%s) PTR_DEST (%s) : Expected (word)", str_src_2,
//		str_dest_2);
// 	ft_memmove(str_dest_2, str_src_2, sizeof(str_src_2));
// 	printf(" result : %s", str_dest_2);

// 	char	str_src_3[] = "";
// 	char	str_dest_3[] = "abcdef";
// 	printf("\n PTR_SRC (%s) PTR_DEST (%s) : Expected (abcdefabcdef)",
//		str_dest_3, str_dest_3);
// 	ft_memmove(str_dest_3 + 6, str_dest_3, 10);
// 	printf(" result : %s", str_dest_3);

// 	return (0);
// }

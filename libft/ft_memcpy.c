/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:28:36 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/07 15:04:18 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *dest_temp;
	char *src_temp;
	unsigned int i;

	i = 0;
	dest_temp = (char *) dest;
	src_temp = (char *) src;

	while(i < n)
	{
		dest_temp[i] = src_temp[i];
		i++;	
	}

	dest_temp[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {

// 	char	str_src[] = "geeks";
// 	char	str_dest[] = "";
// 	printf("\n PTR_SRC (%s) PTR_DEST (%s) : Expected (geeks)", str_src, str_dest);
// 	ft_memcpy(str_dest, str_src, sizeof(str_src));
// 	printf(" result : %s", str_dest);

// 	char	str_src_2[] = "world";
// 	char	str_dest_2[] = "hello ";
// 	printf("\n PTR_SRC (%s) PTR_DEST (%s) : Expected (geeks)", str_src_2, str_dest_2);
// 	ft_memcpy(str_dest_2, str_src_2, sizeof(str_src_2));
// 	printf(" result : %s", str_dest_2);


// 	char	str_src_3[] = "";
// 	char	str_dest_3[] = "abcdef";
// 	printf("\n PTR_SRC (%s) PTR_DEST (%s) : Expected (geeks)", str_dest_3, str_dest_3);
// 	ft_memcpy(str_dest_3 + 6, str_dest_3, 10);
// 	printf(" result : %s", str_dest_3);
	
// 	return (0);
// }

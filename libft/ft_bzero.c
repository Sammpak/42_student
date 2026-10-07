/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:04:27 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/07 15:03:47 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp_ptr;
	size_t			pose;

	tmp_ptr = (unsigned char *)s;
	pose = 0;
	while (pose < n)
	{
		tmp_ptr[pose] = 0;
		pose++;
	}
}


// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "hello world";

// 	int nbr = 4;	
// 	printf("\n PTR (%s) nbr (%d) : Expected (0000o world)", str, nbr);
// 	ft_bzero(str, nbr);

// 	int i = 0;
// 	printf("\n result : ");
// 	while (i < 11)
// 	{
// 		printf("%d ", (unsigned char)str[i]);
// 		i++;
// 	}

// 	char	str_2[] = "0123456789";
// 	nbr = 7;	
// 	printf("\n PTR (%s) nbr (%d) : Expected (0000000789)", str_2, nbr);
// 	ft_bzero(str_2, nbr);

// 	i = 0;
// 	printf("\n result : ");
// 	while (i < 10)
// 	{
// 		printf("%d ", (unsigned char)str_2[i]);
// 		i++;
// 	}

// 	char	str_3[15] = "hello";
// 	nbr = 15;	
// 	printf("\n PTR (%s) nbr (%d) : Expected (000000000000000)", str_3, nbr);
// 	ft_bzero(str_3, nbr);

// 	i = 0;
// 	printf("\n result : ");
// 	while (i < 15)
// 	{
// 		printf("%d ", (unsigned char)str_3[i]);
// 		i++;
// 	}
	
// 	printf("\n");
// 	return (0);
// }

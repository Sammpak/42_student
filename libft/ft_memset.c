/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:48:24 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/07 15:15:13 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void * ft_memset ( void * ptr, int value, size_t num )
{
	char * tmp_ptr;
	tmp_ptr = (char *) ptr;
	size_t pose = 0;
	while(pose < num)
	{
		*(tmp_ptr + pose) = (unsigned char) value;
		pose++;
	}	
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "hello world";

// 	char c = '-';
// 	int nbr = 4;	
// 	printf("\n PTR (%s) char (%c) nbr (%d) : Expected (----o word)", str, c, nbr);
// 	ft_memset(str, c, nbr);
// 	printf(" result : %s", str);

// 	char	str_2[] = "0123456789";
// 	c = '@';
// 	nbr = 7;	
// 	printf("\n PTR (%s) char (%c) nbr (%d) : Expected (@@@@@@@789)", str_2, c, nbr);
// 	ft_memset(str_2, c, nbr);
// 	printf(" result : %s", str_2);
	
// 	return (0);
// }

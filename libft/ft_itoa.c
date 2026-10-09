/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:18:51 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 17:41:13 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_int_size(long nbr)
{
	int	i;

	i = 0;
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

int	is_neg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		size;
	long	nbr;

	size = 0;
	nbr = n;
	if (n == 0)
		return ("0");
	if (nbr < 0)
	{
		size++;
		nbr = nbr * -1;
	}
	size = size + get_int_size(nbr);
	s = malloc(sizeof(char) * size + 1);
	s[size] = '\0';
	while (nbr > 0)
	{
		s[size] = (nbr % 10) + '0';
		nbr = nbr / 10;
		size--;
	}
	if (is_neg(n) == 1)
		s[0] = '-';
	return (s);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int nbr;
// 	char *result;
// 	char *result_2;

// 	nbr = 143;
// 	result = ft_itoa(nbr);
// 	printf("\n nbr (%d) is now (%s) as a string : Expected (143)", nbr,
// 		result);

// 	nbr = -2147483648;
// 	result_2 = ft_itoa(nbr);
// 	printf("\n nbr (%d) is now (%s) as a string : Expected (-2147483648)", nbr,
// 		result_2);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:30:15 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/07 15:03:59 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_isascii(int str)
{
	int result = 0;

	if(str >= 0 && str <= 127)
		result = 1;
	return result;
}

// #include <stdio.h>
// int main()
// {
	
// 	int c = '0';
// 	int result = ft_isascii(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = '3';
// 	result = ft_isascii(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = '@';
// 	result = ft_isascii(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = 231;
// 	result = ft_isascii(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (0)", c, result)
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:30:15 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/07 15:04:03 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int str)
{
	int result = 0;

	if(str >= 48 && str <= 57)
		result = 1;
	return result;
}

// #include <stdio.h>
// int main()
// {
	
// 	char c = '0';
// 	int result = ft_isdigit(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = '3';
// 	result = ft_isdigit(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = '9';
// 	result = ft_isdigit(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = 'a';
// 	result = ft_isdigit(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (0)", c, result);

// 	c = '/';
// 	result = ft_isdigit(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (0)", c, result);

// 	c = ':';
// 	result = ft_isdigit(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (0)", c, result);
	
// }

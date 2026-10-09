/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:30:15 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 16:23:22 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int str)
{
	int	result;

	result = 0;
	if (str >= 48 && str <= 57)
		result = 1;
	if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122))
		result = 1;
	return (result);
}

// #include <stdio.h>
// int main()
// {

// 	char c = '0';
// 	int result = ft_isalnum(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = '9';
// 	result = ft_isalnum(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = 'a';
// 	result = ft_isalnum(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = 'z';
// 	result = ft_isalnum(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = 'A';
// 	result = ft_isalnum(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = 'Z';
// 	result = ft_isalnum(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = ':';
// 	result = ft_isalnum(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (0)", c, result);

// 	c = '@';
// 	result = ft_isalnum(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (0)", c, result);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 10:31:36 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/08 15:22:19 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_tolower(int c)
{
	if(c >= 65 && c <= 90)
	{
		return c + 32;
	}
	
	return c;
}

// #include <stdio.h>

// int main()
// {

// 	int result;
// 	char c;

// 	c = 'A';
// 	result = ft_tolower(c);
// 	printf("\n Testing with (A) : Result (%c) : Expected (a)", result);

// 	c = 'Z';
// 	result = ft_tolower(c);
// 	printf("\n Testing with (Z) : Result (%c) : Expected (z)", result);

// 	c = 'a';
// 	result = ft_tolower(c);
// 	printf("\n Testing with (a) : Result (%c) : Expected (a)", result);

// 	c = 'z';
// 	result = ft_tolower(c);
// 	printf("\n Testing with (z) : Result (%c) : Expected (z)", result);

// 	c = '*';
// 	result = ft_tolower(c);
// 	printf("\n Testing with (*) : Result (%c) : Expected (*)", result);
// }
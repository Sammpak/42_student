/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:30:15 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/07 15:03:56 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_isalpha(int str)
{
	int result = 0;

	if( (str >= 65 && str <= 90) || (str >= 97 && str <= 122))
		result = 1;
	return result;
}

// #include <stdio.h>
// int main()
// {
	
// 	char c = 'a';
// 	int result = ft_isalpha(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = 'z';
// 	result = ft_isalpha(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = 'A';
// 	result = ft_isalpha(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = 'z';
// 	result = ft_isalpha(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = 'm';
// 	result = ft_isalpha(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = 'M';
// 	result = ft_isalpha(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);
	
// 	c = '@';
// 	result = ft_isalpha(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (0)", c, result);

// 	c = '2';
// 	result = ft_isalpha(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (0)", c, result);

// }

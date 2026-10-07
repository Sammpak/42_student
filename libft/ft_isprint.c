/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:30:15 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/07 15:04:05 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int str)
{
	int result = 0;

	if (str >= 32 && str <= 126)
		result = 1;
	return result;
}

// #include <stdio.h>
// int main()
// {
	
// 	char c = 'a';
// 	int result = ft_isprint(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = 'B';
// 	result = ft_isprint(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = '~';
// 	result = ft_isprint(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = '!';
// 	result = ft_isprint(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (1)", c, result);

// 	c = ' ';
// 	result = ft_isprint(c);
// 	printf("\n Testing with (%c) : Result (%d) : Expected (0)", c, result);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 10:23:09 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/07 10:30:56 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
	if(c >= 65 && c <= 90)
	{
		return c + 32;
	} else if (c >= 97 && c <= 122)
	{
		return c - 32;
	}
	return c;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf(" \n				[ ft_toupper.c ]				");

	int result;
	char c;

	c = 'A';
	result = ft_toupper(c);
	printf("\n Testing with (A) : Result (%c) : Expected (a)", result);

	c = 'Z';
	result = ft_toupper(c);
	printf("\n Testing with (Z) : Result (%c) : Expected (z)", result);

	c = 'a';
	result = ft_toupper(c);
	printf("\n Testing with (a) : Result (%c) : Expected (A)", result);

	c = 'z';
	result = ft_toupper(c);
	printf("\n Testing with (z) : Result (%c) : Expected (Z)", result);

	c = '*';
	result = ft_toupper(c);
	printf("\n Testing with (*) : Result (%c) : Expected (*)", result);
}
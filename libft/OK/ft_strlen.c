/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:37:00 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/06 10:45:50 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int result = 0;
	while(str[result] != '\0')
		result++;
	
	return result;
}

#include <stdio.h>
int main()
{
	printf(" \n				[ ft_strlen.c ]				");
	
	char *c = "a";
	int result = ft_strlen(c);
	printf("\n Testing with (%s) 			: Result (%d) : Expected (1)", c, result);

	c = "Hello world";
	result = ft_strlen(c);
	printf("\n Testing with (%s) 		: Result (%d) : Expected (11)", c, result);

	c = "thisIsAHUgeSEntence";
	result = ft_strlen(c);
	printf("\n Testing with (%s) 	: Result (%d) : Expected (19)", c, result);

	
}
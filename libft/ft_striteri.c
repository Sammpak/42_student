/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 15:26:36 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/08 16:15:10 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;
	
	i = 0;
	while(s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

void test(unsigned int nbr, char *str)
{
	(void) nbr;
	*str = ft_toupper(*str);
}
int main()
{
	char str[] = "Hello World";
	
	ft_striteri(str, test);
	printf("\n res %s ", str);
	
}
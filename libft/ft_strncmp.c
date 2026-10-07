/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:01:38 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/07 15:15:54 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	int result;
	
	i = 0;
	result = 0;
	while (s1[i] || s2[i])
	{
		if(i > n)
			return 0;
			
		if(s1[i] != s2[i])
		{
			return s1[i] - s2[i];
		}
		i++;
	}
	return result;
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	aphrase[] = "aaaa";
// 	char	bphrase[] = "aaaa";
// 	char	cphrase[] = "abaa";
// 	char	dphrase[] = "aaac";

// 	int		result;
// 	int n;

// 	n = 10;
// 	result = ft_strncmp(aphrase,bphrase, n);
// 	printf("\n Comparing (%s) and (%s) with n(%d) : Result (%d) : Expected (0)",aphrase, bphrase, n, result);
	
// 	result = ft_strncmp(aphrase,cphrase, n);
// 	printf("\n Comparing (%s) and (%s) with n(%d) : Result (%d) : Expected (-1)",aphrase, cphrase, n, result);

// 	result = ft_strncmp(cphrase,aphrase, n);
// 	printf("\n Comparing (%s) and (%s) with n(%d) : Result (%d) : Expected (1)",cphrase, aphrase, n, result);

// 	n = 2;
// 	result = ft_strncmp(aphrase,dphrase, n);
// 	printf("\n Comparing (%s) and (%s) with n(%d) : Result (%d) : Expected (0)",aphrase, dphrase, n, result);
	
// 	return (0);
// }

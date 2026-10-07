/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:33:27 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/07 11:41:47 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	int result;
	const char* temp_s1;
	const char* temp_s2;

	i = 0;
	result = 0;
	temp_s1 = (char *)s1;
	temp_s2 = (char *)s2;

	
	while (temp_s1[i] || temp_s2[i])
	{
		if(i > n)
		{
			return 0;
		}
		if(temp_s1[i] != temp_s2[i])
		{
			return temp_s1[i] - temp_s2[i];
		}
		i++;
	}
	return result;
}

#include <stdio.h>

int	main(void)
{
	char	aphrase[] = "aaaa";
	char	bphrase[] = "aaaa";
	char	cphrase[] = "abaa";
	char	dphrase[] = "aaac";

	int		result;
	int n;

	n = 10;
	result = ft_memcmp(aphrase,bphrase, n);
	printf("\n Comparing (%s) and (%s) with n(%d) : Result (%d) : Expected (0)",aphrase, bphrase, n, result);
	
	result = ft_memcmp(aphrase,cphrase, n);
	printf("\n Comparing (%s) and (%s) with n(%d) : Result (%d) : Expected (-1)",aphrase, cphrase, n, result);

	result = ft_memcmp(cphrase,aphrase, n);
	printf("\n Comparing (%s) and (%s) with n(%d) : Result (%d) : Expected (1)",cphrase, aphrase, n, result);

	n = 2;
	result = ft_memcmp(aphrase,dphrase, n);
	printf("\n Comparing (%s) and (%s) with n(%d) : Result (%d) : Expected (0)",aphrase, dphrase, n, result);
	
	return (0);
}

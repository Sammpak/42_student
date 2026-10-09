/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 14:06:41 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 16:27:23 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	i;
	char	*temp;

	i = 0;
	ptr = malloc(num * size);
	if (ptr == NULL)
		return (NULL);
	temp = (char *)ptr;
	while (i < (num * size))
	{
		temp[i] = 0;
		i++;
	}
	return (ptr);
}

// #include <stdio.h>

// int main(void)
// {
//     int* p1 = ft_calloc(4, sizeof(int));    //  4 * 4
//     int* p2 = ft_calloc(4, sizeof(int));	//16
//     int* p3 = ft_calloc(4, sizeof *p3);

// 	int index = 0;
//     printf("%d \n",p1[0]);
//     printf("%d \n",p2[2]);
//     printf("%d \n",p3[3]);

//     free(p3);
//     free(p2);
//     free(p1);
// }
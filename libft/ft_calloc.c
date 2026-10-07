/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 14:06:41 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/07 14:50:15 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> 

void* ft_calloc( size_t num, size_t size )
{
	void *ptr;
	int i;
	
	i = 0;
	ptr = malloc(num * size);
	if(ptr == NULL)
		return NULL;
	
	char *temp;
	temp = (char *) ptr;

	
	while(i < (num * size)) //16
	{
		temp[i] = 0;
		i++;
	}

	return ptr;
}


int main(void)
{
    int* p1 = ft_calloc(4, sizeof(int));    //  4 * 4
    int* p2 = ft_calloc(4, sizeof(int));	//16
    int* p3 = ft_calloc(4, sizeof *p3);    

	int index = 0;
    printf("%d \n",p1[0]);
    printf("%d \n",p2[2]);
    printf("%d \n",p3[3]);

	
    free(p3);
    free(p2);
    free(p1);
}
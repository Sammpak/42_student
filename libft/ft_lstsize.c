/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 12:39:45 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 13:36:31 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_lstsize(t_list *lst)
{
	int i;
	t_list *temp;
	temp = lst;
	i = 0;
	while(temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return i;
}

// int main()
// {
// 	char *str = "Hello";
// 	char *str2 = "World";
// 	char *str3 = "encore";
	
// 	t_list *firs_list = ft_lstnew(str);
// 	t_list *second_list = ft_lstnew(str2);
// 	t_list *third_list = ft_lstnew(str3);

// 	unsigned int len = ft_lstsize(firs_list);
// 	printf("[0] nbr of node is : %d \n", len);
	
// 	firs_list->next = second_list;

// 	len = ft_lstsize(firs_list);
// 	printf("[1] nbr of node is : %d \n", len);

// 	second_list->next = third_list;

// 	len = ft_lstsize(firs_list);
// 	printf("[2] nbr of node is : %d \n", len);
	
// }
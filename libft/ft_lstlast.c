/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 12:56:48 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 14:22:39 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list *temp_str;
	
	temp_str = lst;
	while(temp_str->next != NULL)
	{
		temp_str = temp_str->next;	
	}
	return temp_str;
}

// int main()
// {
// 	char *str = "Hello";
// 	char *str2 = "World";
// 	char *str3 = "encore";
	
// 	t_list *firs_list = ft_lstnew(str);
// 	t_list *second_list = ft_lstnew(str2);
// 	t_list *third_list = ft_lstnew(str3);

// 	firs_list->next = second_list;
// 	second_list->next = third_list;

// 	t_list *last;
// 	last = ft_lstlast(firs_list);
// 	printf("The last one is : %s \n", (char *) last->content);
	
// }
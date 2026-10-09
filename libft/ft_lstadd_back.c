/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 13:33:33 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 13:58:39 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp_lst;
	
	temp_lst = *lst;
	while(temp_lst->next != NULL)
	{
		temp_lst = temp_lst->next;	
	}
	
	temp_lst->next = new;
	new->next = NULL;

}

// int main()
// {
// 	char str[] = "first";
// 	char str_2[] = "second";

// 	t_list *first_lst = ft_lstnew(str);
// 	t_list *last_lst = ft_lstnew(str_2);

// 	printf(" before adding new last [%s] \n ", (char *) first_lst->content);

// 	ft_lstadd_back(&first_lst ,last_lst);

// 	printf(" After adding new last [%s] \n ", (char *) first_lst->next->content);

// 	return (0);
// }
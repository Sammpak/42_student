/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 12:20:32 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 13:23:05 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int main()
// {
// 	char str[] = "Hello world";
// 	char str_2[] = "bonjours le monde";

// 	t_list *first_str = ft_lstnew(str);
// 	t_list *new_first_str = ft_lstnew(str_2);

// 	printf(" before adding first [%s] \n ", (char *) first_str->content);

// 	ft_lstadd_front(&first_str ,new_first_str);

// 	printf(" After adding new first [%s] [%s] \n ", (char *) first_str->content, (char *) first_str->next->content);

// 	return (0);
// }
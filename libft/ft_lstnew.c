/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 11:04:28 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 16:29:30 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_str;

	new_str = malloc(sizeof(t_list));
	if (new_str == NULL)
		return (NULL);
	new_str->content = content;
	new_str->next = NULL;
	return (new_str);
}

// int main()
// {
// 	char str[] = "Hello world";
// 	int nbr = 12345;
// 	t_list *new_list_char = ft_lstnew(str);
// 	t_list *new_list_nbr = ft_lstnew(&nbr);

// 	printf("result str: [%s] [%s] \n", (char *)new_list_char->content,
//		(char *)new_list_nbr->next);

// 	printf("result nbr: [%d] [%s] \n", *(int *)new_list_nbr->content,
//		(char *)new_list_nbr->next);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 15:24:48 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 16:08:06 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
	
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list *temp;
	t_list *new_lst;
	
	temp = lst;
	new_lst = ft_lstnew( (*f)(temp->content) );

	while(temp != NULL)	
	{
		ft_lstadd_back(&new_lst, temp->next);
		temp = temp->content;
	}

	return new_lst;
}

void *test(void *value)
{
	int i;
	char *str;

	str = ft_strdup((char *) value);
	i = 0;
	while(str[i])
	{	
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return str;
}

void test_delete(void* lst)
{
	lst = NULL;
}

int main()
{
	char str[] = "hello";
	char str_2[] = "world";
	char str_3[] = "idiiii";

	t_list *first_lst = ft_lstnew(str);
	t_list *second_lst = ft_lstnew(str_2);
	t_list *last_lst = ft_lstnew(str_3);
	
	t_list *new_lst;
	
	ft_lstadd_back(&first_lst, second_lst);
	ft_lstadd_back(&first_lst, last_lst);

	
	printf("\n Before changing %s ", (char * ) first_lst->content);
	printf("\n Before changing %s ", (char * ) first_lst->next->content);
	printf("\n Before changing %s ", (char * ) first_lst->next->next->content);

	new_lst = ft_lstmap(second_lst, test, test_delete);

	printf("\n Before changing %s ", (char * ) new_lst->content);
	printf("\n Before changing %s ", (char * ) new_lst->next->content);
	printf("\n Before changing %s ", (char * ) new_lst->next->next->content);

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 15:01:27 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 16:11:25 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *next_to_change;

	next_to_change = lst;
	
	while(next_to_change != NULL)	
	{
		(*f)(next_to_change->content);
		next_to_change = next_to_change->next;
	}
}

void test(void *value)
{
	printf("test");
	int i;
	char *str;

	str = (char *) value;
	i = 0;
	while(str[i])
	{	
		str[i] = ft_toupper(str[i]);
		i++;
	}

}

int main()
{
	char str[] = "hello";
	char str_2[] = "world";
	char str_3[] = "idiiii";

	t_list *first_lst = ft_lstnew(str);
	t_list *second_lst = ft_lstnew(str_2);
	t_list *last_lst = ft_lstnew(str_3);

	ft_lstadd_back(&first_lst, second_lst);
	ft_lstadd_back(&first_lst, last_lst);

	
	printf("\n Before changing %s ", (char * ) first_lst->content);
	printf("\n Before changing %s ", (char * ) first_lst->next->content);
	printf("\n Before changing %s ", (char * ) first_lst->next->next->content);

	ft_lstiter(first_lst, test);

	printf("\n After changing %s ", (char * ) first_lst->content);
	printf("\n After changing %s ", (char * ) first_lst->next->content);
	printf("\n After changing %s ", (char * ) first_lst->next->next->content);

	return (0);
}
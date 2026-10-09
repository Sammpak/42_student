/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:16:55 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 17:54:29 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		index_start;
	int		index_end;
	int		len;
	char	*temp;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	index_start = 0;
	len = ft_strlen(s1);
	while (s1[index_start] && ft_strchr(set, s1[index_start]))
		index_start++;
	index_end = len - 1;
	while (index_end > index_start && ft_strchr(set, s1[index_end]))
		index_end--;
	result = ft_substr(s1, index_start, index_end - index_start + 1);
	return (result);
}

// int main()
// {
// 	char *s;
// 	char *set;

// 	s = "xxyyHELLOZzZxxzz";s
// 	set = "xyz";
// 	char *result = ft_strtrim(s,set);
// 	printf("\n Str (%s) without (%s): Result (%s) : Expected (HELLO)",
//		s,set, result);

// 	free(result);

// 	s = NULL;
// 	set = "xyz";
// 	result = ft_strtrim(s,set);
// 	printf("\n Str (%s) without the (%s) : Result (%s) : Expected ((null))",
//		s,set, result);

// 	free(result);

// 	s = "123";
// 	set = NULL;
// 	result = ft_strtrim(s,set);
// 	printf("\n Str (%s) will remove all the (%s) at the beginning and the end :
//Result (%s) : Expected ((null))",
//		s,set, result);

// 	free(result);

// 	s = "BMW";
// 	set = "";
// 	result = ft_strtrim(s,set);
// 	printf("\n Str (%s) will remove all the (%s) at the beginning and the end :
//Result (%s) : Expected (BMW)",
//		s,set, result);

// 	free(result);

// 	s = "";
// 	set = "RX7";
// 	result = ft_strtrim(s,set);
// 	printf("\n Str (%s) will remove all the (%s) at the beginning and the end :
//Result (%s) : Expected ()",
//		s,set, result);

// 	free(result);
// }

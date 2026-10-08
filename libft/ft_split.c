/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:34:52 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/08 14:16:11 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int count_word(char const *s, char c)
{
	int word;
	int i;

	word = 0;
	i = 0;
	while(s[i])
	{
		if(s[i] != c)
		{
			while(s[i] != c && s[i])
				i++;			
			word++;		
		} else
			i++;
	}
	return word;
}
char **ft_split(char const *s, char c)
{
	char **result;
	int len;
	int nbrWrd;
	
	nbrWrd = 0;
	len = ft_strlen(s);
	if(len == 0)
		return NULL;

	nbrWrd = count_word(s,c);

	result = malloc(sizeof(char) * nbrWrd + 1); 
	if(result == NULL)
		return NULL;
	
	printf("\n nbr word %d", nbrWrd);

	//tant que pas diff
	int from = 0;
	int i = 0;
	int index = 0;
	
	while(s[i])
	{
		if(s[i] != c)
		{
			from = i;
			while(s[i] != c && s[i])
				i++;
			//fin du mot
			result[index] = malloc(sizeof(char) * i - from + 1);
			if(result == NULL)
				return NULL;

			ft_strlcpy(result[index],&s[from], i - from - 1);
			index++;
		} else
			i++;
	}

	result[index] = NULL;
	return result;
	
}

// int main()
// {
// 	char *s;
// 	char c;

// 	s = "--hello--world-SHENDI-";
// 	c = '-';
// 	char **result = ft_split(s,c);
// 	printf("\n Str (%s) will remove all the (%c) at the beginning and the end : Expected ([hello][world][SHENDI])", s, c);

// 	if (result)
// 	{
// 		char **tab = result; 
		
// 		while (*tab)
// 		{
// 			printf("result : [%s]\n", *tab);
// 			tab++;
// 		}
// 	}
// }
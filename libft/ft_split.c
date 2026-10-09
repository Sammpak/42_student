/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:34:52 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 17:52:42 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			word++;
		}
		else
			i++;
	}
	return (word);
}

void	split_custom(char **result, char c, char const *s)
{
	int	i;
	int	index;
	int	from;

	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			from = i;
			while (s[i] != c && s[i])
				i++;
			result[index] = malloc(sizeof(char) * i - from + 1);
			if (result[index] == NULL)
				return ;
			ft_strlcpy(result[index], &s[from], i - from - 1);
			index++;
		}
		else
			i++;
	}
	result[index] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		nbrwrd;

	if (ft_strlen(s) == 0)
		return (NULL);
	nbrwrd = count_word(s, c);
	result = malloc(sizeof(char) * nbrwrd + 1);
	if (result == NULL)
		return (NULL);
	split_custom(result, c, s);
	return (result);
}

// int main()
// {
// 	char *s;
// 	char c;

// 	s = "--hello--world-SHENDI-";
// 	c = '-';
// 	char **result = ft_split(s,c);
// 	printf("\n Str (%s) without (%c) Expected ([hello][world][SHENDI])",
// 		s, c);

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
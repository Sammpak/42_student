/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:16:55 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/07 16:54:21 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int		ft_strlen(const char *str)
{
	int result = 0;
	while(str[result] != '\0')
		result++;
	
	return result;
}

int get_size_set(char const *s1, char const *set)
{
	int i;
	int j;
	int total;

	total = 0;
	i = 0;
	j = 0;
	
	while(s1[i])
	{
		if(s1[i] == set[j])
		{
			while(set[j])
			{
				if(set[j] == s1[i])
				{
					if(!set[j + 1])
					{
						total++;
						break;		
					}
				}
				j++;
				i++;
			}
			i = i - j;
			j = 0;
		}
		i++;
	}
	return total;

}

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int size_s1;
	int size_set;
	int nbr_set_str;
	
	nbr_set_str = get_size_set(s1, set);
	printf("\n nbr set %d", nbr_set_str);
	size_s1 = ft_strlen(s1);
	size_set = ft_strlen(set);
	
	int test = 1 * size_s1 - (size_set * nbr_set_str);
	printf("\n %d", test);

	str = malloc(sizeof(char) * size_s1 + (size_set * nbr_set_str) + 1);

	
	return str;	
}

int main()
{
	char *s;
	char *set;
	 
	s = "RX7 is a nice car  ";
	set = " a";
	char *result = ft_strtrim(s,set);
	printf("\n Str (%s) will remove all the (%s) in it : Result (%s) : Expected (RX7isanicecar)", s,set, result);
	
	free(result);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:01:31 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/07 16:23:03 by spaccaud         ###   ########.fr       */
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

char *ft_strjoin(char const *s1, char const *s2)
{
	int total_lengh;
	char *str;
	int i;

	i = 0;
	total_lengh = ft_strlen(s1) + ft_strlen(s2); //10
	str = malloc(sizeof(char) * total_lengh + 1); //extra for \0 //check - 5
	if(str == NULL)
		return NULL;

	while(*s1)
	{
		str[i] = *s1;
		s1++;
		i++;
	}	
	while(*s2)
	{
		str[i] = *s2;
		s2++;
		i++;
	}
	str[i] = '\0';
	return str;
}

int main()
{
	char *s1;
	char *s2;
	 
	s1 = "Code ";
	s2 = "Geass";
	char *result = ft_strjoin(s1, s2);
	printf("\n Join (%s) with (%s) : Result (%s) : Expected (Code Geass)", s1, s2, result);
	
	free(result);
	
	s1 = "Tacos Salade ";
	s2 = "Tomate onion";
	result = ft_strjoin(s1, s2);
	printf("\n Join (%s) with (%s) : Result (%s) : Expected (Tacos Salade Tomate onion)", s1, s2, result);
	
	free(result);
	
}
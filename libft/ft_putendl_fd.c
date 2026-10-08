/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 15:57:38 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/08 16:48:54 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
# include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	int i;
	i = 0;
	while(s[i])
	{
		write(fd,&s[i],1);
		i++;
	}
	write(fd,"\n",1);
}

#include <fcntl.h>

int	dict_open(char *file, int __oflag)
{
	int	fd;

	fd = open(file, __oflag);
	if (fd == -1)
		return (0);
	return (fd);
}

int	dict_close(int filedesc)
{
	if (close(filedesc) == -1)
		return (0);
	return (1);
}

int main()
{
	char *s;
	s = "hello world";
	int fd = dict_open("./test.txt", O_WRONLY);
	if (fd == 0)
	{
		printf("failed to open");
	}
	ft_putendl_fd(s,fd);
	dict_close(fd);
	if (dict_close(fd) == 0)
	{
		printf("failed to close");
	}
}
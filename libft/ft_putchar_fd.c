/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 15:57:38 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 16:34:36 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>

// int	dict_open(char *file, int __oflag)
// {
// 	int	fd;

// 	fd = open(file, __oflag);
// 	if (fd == -1)
// 		return (0);
// 	return (fd);
// }

// int	dict_close(int filedesc)
// {
// 	if (close(filedesc) == -1)
// 		return (0);
// 	return (1);
// }

// int main()
// {
// 	char c;
// 	c = 'b';
// 	int fd = dict_open("./test.txt", O_WRONLY);
// 	if (fd == 0)
// 	{
// 		printf("failed to open");
// 	}
// 	ft_putchar_fd(c,fd);
// 	dict_close(fd);
// 	if (dict_close(fd) == 0)
// 	{
// 		printf("failed to close");
// 	}
// }
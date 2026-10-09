/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 16:44:03 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/09 16:36:33 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 15:57:38 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/08 16:43:51 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	*nbr;

	i = 0;
	nbr = ft_itoa(n);
	while (nbr[i])
	{
		write(fd, &nbr[i], 1);
		i++;
	}
}

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

// int main()
// {
// 	int nbr;
// 	nbr = 123;
// 	int fd = dict_open("./test.txt", O_WRONLY);
// 	if (fd == 0)
// 	{
// 		printf("failed to open");
// 	}
// 	ft_putnbr_fd(nbr,fd);
// 	dict_close(fd);
// 	if (dict_close(fd) == 0)
// 	{
// 		printf("failed to close");
// 	}
// }
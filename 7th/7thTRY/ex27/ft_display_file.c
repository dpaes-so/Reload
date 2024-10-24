/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:08:29 by dpaes-so          #+#    #+#             */
/*   Updated: 2024/10/24 15:04:52 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	filework(const char *s)
{
	char	str[4096];
	int		rt;
	int		fd;

	fd = open(s, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return ;
	}
	rt = read(fd, str, 4096);
	while (rt > 0)
	{
		write(1, &str, rt);
		rt--;
		rt = read(fd, str, 4096);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	const char	*s;

	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		s = argv[1];
		filework(s);
	}
}

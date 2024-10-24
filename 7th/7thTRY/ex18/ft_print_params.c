/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:41:15 by dpaes-so          #+#    #+#             */
/*   Updated: 2024/10/23 11:32:38 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

int	main(int argc, char **argv)
{
	int	i;
	int	ac;

	ac = 1;
	if (argc > 1)
	{
		while (ac < argc)
		{
			i = 0;
			while (argv[ac][i] != '\0')
			{
				ft_putchar(argv[ac][i]);
				i++;
			}
			ft_putchar('\n');
			ac++;
		}
	}
}

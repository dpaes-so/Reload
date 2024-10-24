/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:17:37 by dpaes-so          #+#    #+#             */
/*   Updated: 2024/10/23 12:59:17 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqr;
	int	i;

	i = 1;
	sqr = 0;
	while (nb > 0)
	{
		nb = nb - i;
		i += 2;
		sqr++;
	}
	if (nb == 0)
		return (sqr);
	else
		return (0);
}

/*int	main(void)
{
	int h = ft_sqrt(441);
	printf("%d", h);
}*/
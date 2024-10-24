/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:31:25 by dpaes-so          #+#    #+#             */
/*   Updated: 2024/10/23 11:05:10 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *src)
{
	char	*buffer;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	buffer = malloc(sizeof(char) * len + 1);
	while (src[i] != '\0')
	{
		buffer[i] = src[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/*int	main(void)
{
	char str[] = "banana";
	char *result = ft_strdup(str);
	printf("%s\n", result);
}*/
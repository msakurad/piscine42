/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:06:43 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/21 20:35:23 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(char *str);

int	main(void)
{
	char	*src;
	char	*dest;

	src = (char *)malloc(sizeof(char) * 50);
	dest = (char *)malloc(sizeof(char) * 50);
	strcpy(src, "palha");
	strcpy(dest, "batata");
	printf("ft: %d\n", ft_strlcat(dest, src, 2));
	strcpy(src, "feijao");
	strcpy(dest, "arroz");
	printf("ft: %d\n", ft_strlcat(dest, src, 8));
	free(src);
	free(dest);
	return (0);
}

// cc -Wall -Wextra -Werror *.c -lbsd && ./a.out

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c_dest;
	unsigned int	c_src;
	unsigned int	i;

	c_dest = ft_strlen(dest);
	c_src = ft_strlen(src);
	if (c_dest >= size)
		return (size + c_src);
	i = 0;
	while (src[i] && i < size - c_dest - 1)
	{
		dest[c_dest + i] = src[i];
		i++;
	}
	dest[c_dest + i] = '\0';
	return (c_dest + c_src);
}

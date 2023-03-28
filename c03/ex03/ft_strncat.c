/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:03:47 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/20 15:44:45 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char	*ft_strncat(char *dest, char *src, unsigned int nb);

// int	main(void)
// {
// 	char	*src;
// 	char	*dest;

// 	src = (char *)malloc(sizeof(char) * 50);
// 	dest = (char *)malloc(sizeof(char) * 50);
// 	strcpy(src, "palha");
// 	strcpy(dest, "batata");
// 	printf("ft: %s\n", ft_strncat(dest, src, 2));
// 	strcpy(src, "feijão");
// 	strcpy(dest, "arroz");
// 	printf("ft: %s\n", ft_strncat(dest, src, 8));
// 	free(src);
// 	free(dest);
// 	return (0);
// }

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:43:46 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/20 21:55:05 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char	*ft_strcat(char *dest, char *src);

// int	main(void)
// {
// 	char	*src;
// 	char	*dest;

// 	src = (char *)malloc(sizeof(char) * 50);
// 	dest = (char *)malloc(sizeof(char) * 50);
// 	strcpy(src, "palha");
// 	strcpy(dest, "batata");
// 	printf("ft: %s\n", ft_strcat(dest, src));
// 	strcpy(src, "feijão");
// 	strcpy(dest, "arroz");
// 	printf("ft: %s\n", ft_strcat(dest, src));
// 	free(src);
// 	free(dest);
// 	return (0);
// }

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:12:09 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/31 16:32:56 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

// char	*ft_strdup(char *src);
// int	ft_strlen(char *str);

// int	main(void)
// {
// 	char	*dup;
// 	char	*src;

// 	src = "batata";
// 	printf("src %s\n", src);
// 	dup = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
// 	dup = ft_strdup(src);
// 	printf("string dupl %s\n", dup);
// 	free(dup);
// 	return (0);
// }

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	dup = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

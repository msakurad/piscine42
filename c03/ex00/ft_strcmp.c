/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:21:22 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/18 17:27:00 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int	ft_strcmp(char *s1, char *s2);

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = (char *)malloc(sizeof(char) * 40);
// 	str2 = (char *)malloc(sizeof(char) * 40);
// 	strcpy(str1, "abc");
// 	strcpy(str2, "abc");
// 	printf("lib: %d ft: %d\n", strcmp(str1, str2), ft_strcmp(str1, str2));
// 	strcpy(str1, "Ola");
// 	strcpy(str2, "Ola´");
// 	printf("lib: %d ft: %d\n", strcmp(str1, str2), ft_strcmp(str1, str2));
// 	strcpy(str1, "abc");
// 	strcpy(str2, "ab");
// 	printf("lib: %d ft: %d\n", strcmp(str1, str2), ft_strcmp(str1, str2));
// 	strcpy(str1, "ab");
// 	strcpy(str2, "abcd");
// 	printf("lib: %d ft: %d\n", strcmp(str1, str2), ft_strcmp(str1, str2));
// 	strcpy(str1, "xyz3");
// 	strcpy(str2, "ab");
// 	printf("lib: %d ft: %d\n", strcmp(str1, str2), ft_strcmp(str1, str2));
// 	return (0);
// }

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

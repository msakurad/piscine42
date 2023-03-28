/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:42:47 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/20 17:40:41 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int	ft_strncmp(char *s1, char *s2, unsigned int n);

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = (char *)malloc(sizeof(char) * 40);
// 	str2 = (char *)malloc(sizeof(char) * 40);
// 	strcpy(str1, "abc");
// 	strcpy(str2, "abc");
// 	printf("l: %d ft: %d\n", strncmp(str1, str2, 0), ft_strncmp(str1, str2, 0));
// 	printf("l: %d ft: %d\n", strncmp(str1, str2, 3), ft_strncmp(str1, str2, 3));
// 	strcpy(str1, "abcadef");
// 	strcpy(str2, "abcad");
// 	printf("%s %s\n", str1, str2);
// 	printf("l: %d ft: %d\n", strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));
// 	printf("l: %d ft: %d\n", strncmp(str1, str2, 6), ft_strncmp(str1, str2, 6));
// 	strcpy(str1, "abcad");
// 	strcpy(str2, "abcadtg");
// 	printf("%s %s\n", str1, str2);
// 	printf("l: %d ft: %d\n", strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));
// 	printf("l: %d ft: %d\n", strncmp(str1, str2, 6), ft_strncmp(str1, str2, 6));
// 	printf("l: %d ft: %d\n", strncmp(str1, str2, 9), ft_strncmp(str1, str2, 9));
// 	free(str1);
// 	free(str2);
// 	return (0);
// }

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

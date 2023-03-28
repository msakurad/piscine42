/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:05:24 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/20 15:47:51 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char	*ft_strstr(char *str, char *to_find);

// int	main(void)
// {
// 	char	*str;
// 	char	*to_find;

// 	str = (char *)malloc(sizeof(char) * 50);
// 	to_find = (char *)malloc(sizeof(char) * 50);
// 	strcpy(str, "batata palha");
// 	strcpy(to_find, "ta");
// 	printf("%s %s\n", str, to_find);
// 	printf("ft: %s\n", ft_strstr(str, to_find));
// 	printf("lib: %s\n", strstr(str, to_find));
// 	strcpy(to_find, "palha");
// 	printf("%s %s\n", str, to_find);
// 	printf("ft: %s\n", ft_strstr(str, to_find));
// 	printf("lib: %s\n", strstr(str, to_find));
// 	strcpy(to_find, "palhas");
// 	printf("%s %s\n", str, to_find);
// 	printf("ft: %s\n", ft_strstr(str, to_find));
// 	printf("lib: %s\n", strstr(str, to_find));
// 	strcpy(to_find, "l");
// 	printf("%s %s\n", str, to_find);
// 	printf("ft: %s\n", ft_strstr(str, to_find));
// 	printf("lib: %s\n", strstr(str, to_find));
// 	free(str);
// 	free(to_find);
// 	return (0);
// }

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == 0)
		return (&str[0]);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

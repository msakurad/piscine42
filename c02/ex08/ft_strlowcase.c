/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:17:55 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/17 14:18:08 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char	*ft_strlowcase(char *str);

// int	main(void)
// {
// 	char	str[100];

// 	sprintf(str, "ABCDE");
// 	ft_strlowcase(str);
// 	printf("%s\n", str);
// 	sprintf(str, "2345yHs");
// 	ft_strlowcase(str);
// 	printf("%s\n", str);
// 	sprintf(str, "&&jYskA");
// 	ft_strlowcase(str);
// 	printf("%s\n", str);
// 	sprintf(str, " ");
// 	ft_strlowcase(str);
// 	printf("%s\n", str);
// 	return (0);
// }

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

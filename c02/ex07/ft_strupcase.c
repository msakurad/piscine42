/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:16:27 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/17 14:16:45 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char	*ft_strupcase(char *str);

// int	main(void)
// {
// 	char	str[100];

// 	sprintf(str, "abcde");
// 	ft_strupcase(str);
// 	printf("%s\n", str);
// 	sprintf(str, "2345yhs");
// 	ft_strupcase(str);
// 	printf("%s\n", str);
// 	sprintf(str, "&&jskA");
// 	ft_strupcase(str);
// 	printf("%s\n", str);
// 	sprintf(str, " ");
// 	ft_strupcase(str);
// 	printf("%s\n", str);
// 	return (0);
// }

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

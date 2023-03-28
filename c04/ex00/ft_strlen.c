/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:03:15 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/19 18:02:59 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int	ft_strlen(char *str);

// int	main(void)
// {
// 	char	*str;

// 	str = (char *)malloc(sizeof(char) * 40);
// 	strcpy(str, "abced");
// 	printf("%d\n", ft_strlen(str));
// 	strcpy(str, "abcdefghij");
// 	printf("%d\n", ft_strlen(str));
// 	strcpy(str, "");
// 	printf("%d\n", ft_strlen(str));
// free(str);
// 	return (0);
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

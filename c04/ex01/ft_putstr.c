/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:03:56 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/19 18:07:12 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <string.h>
// #include <stdlib.h>

// void	ft_putstr(char *str);

// int	main(void)
// {
// 	char	*str;

// 	str = (char *)malloc(sizeof(char) * 40);
// 	strcpy(str, "Hello World");
// 	ft_putstr(str);
// 	write(1, "\n", 1);
// 	strcpy(str, "");
// 	ft_putstr(str);
// 	write(1, "\n", 1);
// 	strcpy(str, "Teste");
// 	ft_putstr(str);
// 	free(str);
// 	return (0);
// }

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

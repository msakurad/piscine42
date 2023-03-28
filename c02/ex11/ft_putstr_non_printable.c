/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:24:50 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/17 14:38:24 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

// void	ft_putstr_non_printable(char *str);

// int	main(void)
// {
// 	char	str[200];

// 	sprintf(str, "abc def ghi\v");
// 	ft_putstr_non_printable(str);
// 	write(1, "\n", 1);
// 	sprintf(str, "Coucou\ntu vas	bien ?");
// 	ft_putstr_non_printable(str);
// 	return (0);
// }

char	ft_convert_hex(int aux)
{
	char	chex;

	if (aux == 10)
		chex = 'a';
	else if (aux == 11)
		chex = 'b';
	else if (aux == 12)
		chex = 'c';
	else if (aux == 13)
		chex = 'd';
	else if (aux == 14)
		chex = 'e';
	else if (aux == 15)
		chex = 'f';
	else
		chex = aux + '0';
	return (chex);
}

void	ft_putstr_non_printable(char *str)
{
	int		aux;
	char	aux2;

	while (*str)
	{
		if (*str >= 0 && *str <= 31)
		{
			aux = (int)(*str) + 0;
			aux2 = aux / 16 + '0';
			write(1, "\\", 1);
			write(1, &aux2, 1);
			aux = aux % 16;
			if (aux > 9)
				aux2 = ft_convert_hex(aux);
			write(1, &aux2, 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}

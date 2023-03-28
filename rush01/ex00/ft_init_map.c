/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:41:14 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/12 22:03:51 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define LINPUT 31
#define LMAP 16

void	ft_check_input(char	*str);
void	ft_putstr(char	*str);
void	ft_putint(int n);
void	ft_map_zero_step(char *map);

void	ft_map_zero_step(char *map)
{
	int		i;

	i = 0;
	while (i < LMAP)
	{
		map[i] = ' ';
		i++;
	}
}

void	ft_prepare_input(char *input, char *col, char *row)
{
	int		cont;

	cont = 0;
	ft_check_input(input);
	while (*input)
	{
		if (*input >= '1' && *input <= '4')
		{
			if (cont <= 7)
				col[cont] = *input;
			else
				row[cont - 8] = *input;
			cont++;
		}
		input++;
	}
}

void	ft_check_input(char	*str)
{
	int		cont;

	cont = 0;
	while (*str)
	{
		str++;
		cont++;
	}
	if (cont != LINPUT)
	{
		write(1, "Error\n", 6);
	}
}

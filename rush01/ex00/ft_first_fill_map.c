/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_fill_map.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 03:40:13 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/12 21:59:41 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_map_col_fill_for_ones(char *map, char *col);
void	ft_map_col_fill_for_fours(char *map, char *col);
void	ft_map_row_fill_for_ones(char *map, char *row);
void	ft_map_row_fill_for_fours(char *map, char *row);

void	ft_print_map(char *map)
{
	int		i;
	int		j;

	i = 0;
	while (*map)
	{
		j = 0;
		while (j <= 3)
		{
			if (i % 4 != 0)
				write(1, " ", 1);
			write(1, map, 1);
			j++;
			i++;
			map++;
		}
		write(1, "\n", 1);
	}
}

void	ft_map_col_fill_for_ones(char *map, char *col)
{
	int		i;

	i = 0;
	while (*col)
	{
		if (*col == '1')
		{
			if (i < 4)
				map[i] = '4';
			else
				map[i + 8] = '4';
		}
		i++;
		col++;
	}
}

void	ft_map_col_fill_for_fours(char *map, char *col)
{
	int		i;

	i = 0;
	while (*col)
	{
		if (*col == '4')
		{
			if (i < 4)
			{
				map[i] = '1';
				map[i + 4] = '2';
				map[i + 8] = '3';
				map[i + 12] = '4';
			}
			else
			{
				map[i + 8] = '1';
				map[i + 4] = '2';
				map[i] = '3';
				map[i - 4] = '4';
			}
		}
		i++;
		col++;
	}
}

void	ft_map_row_fill_for_ones(char *map, char *row)
{
	int		i;

	i = 0;
	while (*row)
	{
		if (*row == '1')
		{
			if (i < 4)
				map[i * 4] = '4';
			else
				map[4 * i - 13] = '4';
		}
		i++;
		row++;
	}
}

void	ft_map_row_fill_for_fours(char *map, char *row)
{
	int		i;

	i = 0;
	while (*row)
	{
		if (*row == '4')
		{
			if (i < 4)
			{
				map[i * 4] = '1';
				map[(i * 4) + 1] = '2';
				map[(i * 4) + 2] = '3';
				map[(i * 4) + 3] = '4';
			}
			else
			{
				map[(i * 4) - 3] = '1';
				map[(i * 4) - 14] = '2';
				map[(i * 4) - 15] = '3';
				map[(i * 4) - 16] = '4';
			}
		}
		i++;
		row++;
	}
}

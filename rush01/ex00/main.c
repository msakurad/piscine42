/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:40:35 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/12 22:26:46 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define LCOL 8
#define LROW 8
#define LMAP 16

void	ft_prepare_input(char *input, char *col, char *row);
void	ft_map_zero_step(char *map);
void	ft_print_map(char *map);
void	ft_map_col_fill_for_ones(char *map, char *col);
void	ft_map_col_fill_for_fours(char *map, char *col);
void	ft_map_row_fill_for_ones(char *map, char *row);
void	ft_map_row_fill_for_fours(char *map, char *row);
void	ft_check_duplicates_col(char *map);
void	ft_check_duplicates_row(char *map);

int	main(int argc, char **argv)
{
	char	*col;
	char	*row;
	char	*map;

	col = (char *)malloc(sizeof(*col) * (LCOL + 1));
	row = (char *)malloc(sizeof(*row) * (LROW + 1));
	map = (char *)malloc(sizeof(*map) * (LMAP + 1));
	if (argc == 2)
	{
		ft_prepare_input(argv[1], col, row);
	}
	else
		write(1, "Error\n", 6);
	ft_map_zero_step(map);
	ft_map_col_fill_for_ones(map, col);
	ft_map_col_fill_for_fours(map, col);
	ft_map_row_fill_for_ones(map, row);
	ft_map_row_fill_for_fours(map, row);
	ft_check_duplicates_col(map);
	ft_check_duplicates_row(map);
	ft_print_map(map);
	return (0);
}

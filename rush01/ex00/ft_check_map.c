/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:02:15 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/12 22:23:08 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_check_duplicates_col(char *map)
{
	int		i;
	int		j;
	int		flag;

	i = 0;
	flag = 0;
	while (i < 4)
	{
		j = i;
		while (j < 16)
		{
			j = j + 4;
			if (map[i] == map[j])
				flag = 1;
		}
		i++;
	}
	if (flag == 1)
		write(1, "Error\n", 6);
}

void	ft_check_duplicates_row(char *map)
{
	int		i;
	int		j;
	int		flag;

	i = 0;
	flag = 0;
	while (i < 4)
	{
		j = i;
		while (j < 16)
		{
			j++;
			if (map[i] == map[j])
				flag = 1;
		}
		i = i + 4;
	}
	if (flag == 1)
		write(1, "Error\n", 6);
}

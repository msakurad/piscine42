/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:34:14 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/31 17:06:49 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

// int	*ft_range(int min, int max);

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*range;

// 	min = 2;
// 	max = 10;
// 	range = (int *)malloc(sizeof(int) * (max - min + 1));
// 	range = ft_range(min, max);
// 	while (*range < max)
// 	{
// 		printf("%d\n", *range);
// 		range++;
// 	}
// 	return (0);
// }

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
	{
		range = (int *)malloc(sizeof(int) * 1);
		return (range);
	}
	range = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	range[i] = min;
	while (++i < max - min)
	{
		range[i] = min + i;
	}
	return (range);
}

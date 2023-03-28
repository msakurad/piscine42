/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:35:06 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/11 23:55:54 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

// int	main(void)
// {
// 	int	n;

// 	n = -10;
// 	ft_is_negative(n);
// }

int	main(void)
{
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative(-1);
	return (0);
}
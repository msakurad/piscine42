/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 22:41:12 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/10 19:52:17 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putnbr(int nb);

int	main(void)
{
	int	nb;

	//nb = INT_MIN;
	nb = -2147483648;
	ft_putnbr(nb);
	return (0);
}

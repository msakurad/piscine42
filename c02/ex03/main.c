/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:17:24 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/14 20:44:59 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_numeric("01234"));
	printf("%d\n", ft_str_is_numeric("012cc"));
	printf("%d\n", ft_str_is_numeric("023456789@7"));
	printf("%d\n", ft_str_is_numeric(""));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:45:58 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/14 20:51:43 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("abcde"));
	printf("%d\n", ft_str_is_lowercase("kbkggi"));
	printf("%d\n", ft_str_is_lowercase("abcde1"));
	printf("%d\n", ft_str_is_lowercase("abcd!e@"));
	printf("%d\n", ft_str_is_lowercase(""));
	return (0);
}

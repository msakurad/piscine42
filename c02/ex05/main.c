/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:53:10 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/14 20:55:18 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("ABCDE"));
	printf("%d\n", ft_str_is_uppercase("MJKFGBMGI"));
	printf("%d\n", ft_str_is_uppercase("JDJJ1"));
	printf("%d\n", ft_str_is_uppercase("ASDASD!e@"));
	printf("%d\n", ft_str_is_uppercase(""));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:28:00 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/12 17:46:45 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	printf("%d\n", ft_strlen("Hello World"));
	printf("%d\n", ft_strlen("Pula\nLinha"));
	printf("%d\n", ft_strlen(""));
	printf("%d", ft_strlen("abcdefghij"));
	return (0);
}

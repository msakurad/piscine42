/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:23:23 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/17 14:23:33 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

// int	main(void)
// {
// 	char	str[200];
// 	char	dest[200];

// 	sprintf(str, "abc def ghi");
// 	ft_strlcpy(dest, str, 30);
// 	printf("%s\n", dest);
// 	sprintf(str, "salut, comment tu vas ?");
// 	ft_strlcpy(dest, str, 30);
// 	printf("%s\n", dest);
// 	sprintf(str, "42mots quarante-deux; cinquante+et+un");
// 	ft_strlcpy(dest, str, 30);
// 	printf("%s\n", dest);
// 	return (0);
// }

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

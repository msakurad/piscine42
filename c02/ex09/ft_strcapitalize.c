/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:19:06 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/18 16:38:02 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[200];

	sprintf(str, "abc def ghi");
	ft_strcapitalize(str);
	printf("%s\n", str);
	sprintf(str, "salut, comment tu vas ?");
	ft_strcapitalize(str);
	printf("%s\n", str);
	sprintf(str, "42mots quarante-deux; cinquante+et+un");
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		if (!((str[i - 1] >= 97 && str[i - 1] <= 122)
				|| (str[i - 1] >= 65 && str[i - 1] <= 90)
				|| (str[i - 1] >= 48 && str[i - 1] <= 57)))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:56:52 by aabdyker          #+#    #+#             */
/*   Updated: 2023/02/21 12:57:02 by aabdyker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int		main()
{
	char	*str = "Hdhsflhaf12431";
	char	*str1 = "ASDFGHJKL";
	char	*str2 = "ASDFGH GHJKL";
	char	*str3 = "";

	printf("%d", ft_str_is_uppercase(str));
	printf("%d", ft_str_is_uppercase(str1));
	printf("%d", ft_str_is_uppercase(str2));
	printf("%d", ft_str_is_uppercase(str3));
	return 0;
} */

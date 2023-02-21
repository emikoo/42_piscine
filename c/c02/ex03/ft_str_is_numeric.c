/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:39:21 by aabdyker          #+#    #+#             */
/*   Updated: 2023/02/21 12:51:18 by aabdyker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
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
	char	*str1 = "3827492*";
	char	*str2 = "34829384";
	char	*str3 = "";

	printf("%d", ft_str_is_numeric(str));
	printf("%d", ft_str_is_numeric(str1));
	printf("%d", ft_str_is_numeric(str2));
	printf("%d", ft_str_is_numeric(str3));
	return 0;
} */

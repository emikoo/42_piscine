/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:48:39 by aabdyker          #+#    #+#             */
/*   Updated: 2023/02/21 12:54:38 by aabdyker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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
	char	*str1 = "asfasgfh";
	char	*str2 = "sdfahdafh asdas";
	char	*str3 = "";

	printf("%d", ft_str_is_lowercase(str));
	printf("%d", ft_str_is_lowercase(str1));
	printf("%d", ft_str_is_lowercase(str2));
	printf("%d", ft_str_is_lowercase(str3));
	return 0;
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:01:36 by aabdyker          #+#    #+#             */
/*   Updated: 2023/02/21 13:06:11 by aabdyker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	char	*str = "Hdhsflhaf12431";
	char	*str1 = "&*^%()#@!";
	char	*str2 = "dhsgfkjsg\nkdkjslfk";
	char	*str3 = "";

	printf("%d", ft_str_is_printable(str));
	printf("%d", ft_str_is_printable(str1));
	printf("%d", ft_str_is_printable(str2));
	printf("%d", ft_str_is_printable(str3));
	return 0;
	return 0;
}*/

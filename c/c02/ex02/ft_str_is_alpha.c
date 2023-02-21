/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:15:03 by aabdyker          #+#    #+#             */
/*   Updated: 2023/02/21 11:34:52 by aabdyker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int main()
{
	char *str = "HGjhsdfqwye2718hjewgqjk";
	char *str1 = "hdsjDASDKjah*sdjfhalskjfsad";
	char *str2 = "jlkfnmsdkjhuiwer;k";
	char *str3 = "TydaduYGJggrueo";
	printf("%d", ft_str_is_alpha(str));
	printf("%d", ft_str_is_alpha(str1));
	printf("%d", ft_str_is_alpha(str2));
	printf("%d", ft_str_is_alpha(str3));
	return 0;
} */

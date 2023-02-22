/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:29:22 by aabdyker          #+#    #+#             */
/*   Updated: 2023/02/21 13:55:35 by aabdyker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	ft_strlowcase(str);
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i] != '\0')
	{
		j = i + 1;
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64))
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] -= 32;
		if ((str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] -= 32;
		i++;
	}
	return (str);
}

/*
int		main()
{
	char str[] = " *salut, comm&ent tu vas ? 42mots quarante-deux; cinquante+et+un";

   	printf("%s", ft_strcapitalize(str));
	return 0;
}*/

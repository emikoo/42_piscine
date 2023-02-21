/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:17:33 by aabdyker          #+#    #+#             */
/*   Updated: 2023/02/21 15:01:55 by aabdyker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		i;

	i = 0;
	while (dest[i] != '\0')
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int main()
{
	char	dest[] = "Hello";
	char	src[] = "miksada";
	unsigned int	size = 6;
	printf("%d", ft_strlcpy(dest, src, size));
	return 0;
}*/

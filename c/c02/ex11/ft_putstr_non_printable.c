/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:27:43 by aabdyker          #+#    #+#             */
/*   Updated: 2023/02/22 17:45:23 by aabdyker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	hex[4];

	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			write(1, &str, 1);
		else
		{
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[*str >> 4 & 0xff];
			hex[2] = "0123456789abcdef"[*str & 0xff];
			write(1, &hex, 3);
		}
		str++;
	}
}
/*
int main()
{
	char	str[10] = "Hello\n";
	ft_putstr_non_printable(str);
	return(0);
}*/

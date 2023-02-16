/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:22:56 by aabdyker          #+#    #+#             */
/*   Updated: 2023/02/15 23:40:36 by aabdyker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		i;
	int		digit;
	char	buffer[20];

	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb == 0)
		write(1, "0", 1);
	while (nb > 0)
	{
		digit = nb % 10;
		buffer[i] = '0' + digit;
		i++;
		nb /= 10;
	}
	while (i > 0)
	{
		i--;
		write(1, &buffer[i], 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:15:29 by aabdyker          #+#    #+#             */
/*   Updated: 2023/02/15 22:09:19 by aabdyker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	digit[n + 1];
	int		i;
	int 	start;
	int		end;

	i = 1;
	start = 0;
	end = n - 1;
	digit[start] = '0';
	digit[n] = ' ';

	if (end != start)
	{
		while (i <= 9)
		{
			digit[end-start] = '0' + i;
			write(1, &digit, n + 1);
			i++;
		}
		end--;
		i = 1;
	}
	while (end == start && i < 9)
	{
		digit[start] = '0' + i;
		digit[end+1] = '1' + i;
		write(1, &digit, n + 1);
		i++;
	}
}

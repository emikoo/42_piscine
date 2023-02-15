/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:05:33 by aabdyker          #+#    #+#             */
/*   Updated: 2023/02/15 16:45:34 by aabdyker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_res(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, "\0 ", 3);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, ", ", 2);
}

void	ft_print_dec(char a, char b, char c, char d)
{
	while (c <= '9')
	{
		while (d <= '9')
		{
			ft_print_res(a, b, c, d);
			d++;
		}
		d = '0';
		c++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '9')
	{
		while (b <= '8')
		{
			d = b + 1;
			ft_print_dec(a, b, c, d);
			c = '0';
			b++;
			d = '2';
		}
		b = '0';
		a++;
	}
}

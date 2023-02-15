/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:19:18 by aabdyker          #+#    #+#             */
/*   Updated: 2023/02/10 11:40:30 by aabdyker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	char alphabet = 'a';

	while(alphabet <= 'z')
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
} 

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:22:37 by aabdyker          #+#    #+#             */
/*   Updated: 2023/02/22 21:50:59 by aabdyker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		i;

	i = 0;
	while (i <= (n - 1))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s2[i] == '\0') && s1[i] == '\0')
		return (0);
	else
		return (s1[i] - s2[i]);
}

/*
int main()
{
    char    s1[] = "hella";
    char    s2[] = "hellb";
    printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, 4));
//    printf("strncmp: %d\n", strncmp(s1, s2, 5));
    return(0);
}*/

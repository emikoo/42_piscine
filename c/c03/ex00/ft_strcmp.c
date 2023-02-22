/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:20:56 by aabdyker          #+#    #+#             */
/*   Updated: 2023/02/22 18:30:31 by aabdyker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
	}
	if (*s2 == '\0')
		return (0);
	else
		return (*s1 - *s2);
}
/*
int main()
{
	char	s1[] = "h";
	char	s2[] = "h";
	char    s3[] = "a";
    char    s4[] = "b";
    char    s5[] = "b";
    char    s6[] = "a";
    printf("%d", ft_strcmp(s1, s2));
	printf("%s", "\n");
    printf("%d", strcmp(s1, s2));
	printf("%s", "\n");
    printf("%d", ft_strcmp(s3, s4));
    printf("%s", "\n");
    printf("%d", strcmp(s3, s4));
	printf("%s", "\n");
 	printf("%d", ft_strcmp(s5, s6));
    printf("%s", "\n");
	printf("%d", strcmp(s5, s6));
	printf("%s", "\n");
	return(0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md_1_ft_strpbrk.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:40:57 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/13 17:47:18 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)(s1 + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(int ac, char *av[])
{
	if (ac != 3)
	{
		printf("please enter 2 string!\n");
		return (1);
	}
	printf("this is s1: %s\nthis is s2: %s\n-------------\n", av[1], av[2]);
	printf("this is result: %s\n", ft_strpbrk(av[1], av[2]));
}
*/

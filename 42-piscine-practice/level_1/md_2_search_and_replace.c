/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md_2_search_and_replace.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 20:39:07 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/08 20:43:47 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 4)
	{
		if (ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1)
		{
			i = 0;
			while (av[1][i])
			{
				if (av[1][i] == av[2][0])
					write(1, &av[3][0], 1);
				else
					write(1, &av[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}

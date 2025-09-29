/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 22:03:30 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/09/25 22:14:32 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	i = 0;
	while (av[1][i])
	{
		if (av[1][i] == 'a')
		{
			write(1, "a\n", 2);
			return (0);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

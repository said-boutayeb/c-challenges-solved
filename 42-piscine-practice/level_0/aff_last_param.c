/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 21:45:03 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/09/25 21:51:59 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[ac - 1][i])
	{
		write(1, &av[ac - 1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

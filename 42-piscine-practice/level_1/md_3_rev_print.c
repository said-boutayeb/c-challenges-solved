/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md_3_rev_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 21:16:22 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/04 21:22:26 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	char	*str;

	if (ac == 2)
	{
		i = 0;
		str = av[1];
		while (str[i])
			i++;
		i--;
		while (i >= 0)
		{
			write(1, &str[i], 1);
			i--;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
}

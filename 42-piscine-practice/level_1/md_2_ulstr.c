/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md_2_ulstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 20:42:59 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/08 20:47:53 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int ac, char **av)
{
	int	index;
	char	*str;

	index = 0;
	if (ac == 2)
	{
		str = av[1];
		while (str[index])
		{
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] -= 32;
			else if (str[index] >= 'A' && str[index] <= 'Z')
				str[index] += 32;
			write(1, &str[index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

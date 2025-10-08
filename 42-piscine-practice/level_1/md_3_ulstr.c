/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md_3_ulstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 20:48:48 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/08 20:53:51 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int   main(int ac, char **av)
{
	int	i;
	int	j;
	char	*str;

	if (ac == 2)
	{
		str = av[1];
		i = 0;
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				j = str[i];
				j -= 32;
				write(1, &j, 1);
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				j = str[i];
				j += 32;
				write(1, &j, 1);
			}
			else
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md_4_actual_alpha_mirror.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 22:43:02 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/10 18:00:30 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int ac, char **av)
{
	int	i;
	char	*str;

	i = 0;
	if (ac == 2)
	{
		str = av[1];
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = ('a' - (str[i] - 'z'));
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = ('M' - (str[i] - 'N'));
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n",1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md_3_repeat_alpha.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 19:08:46 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/04 19:09:21 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int     i;
	char	j;
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
				while (j >= 'a')
				{
					write(1, &str[i], 1);
					j--;
				}
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				j = str[i];
				while (j >= 'A')
				{
					write(1, &str[i], 1);
					j--;
				}
			}
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

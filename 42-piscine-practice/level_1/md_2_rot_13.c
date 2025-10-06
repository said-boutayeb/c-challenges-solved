/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md_2_rot_13.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 19:00:31 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/05 22:00:03 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int	main (int ac, char *av[])
{
	int	i;
	char	*str;

	if (ac == 2)
	{
		str = av[1];
		i = 0;
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'm')
			{
				ft_putchar(str[i] + 13);
			}
			else if (str[i] >= 'n' && str[i] <= 'z')
			{
				ft_putchar(str[i] - 13);
			}

			else if (str[i] >= 'A' && str[i] <= 'M')
			{
				ft_putchar(str[i] + 13);
			}
			else if (str[i] >= 'N' && str[i] <= 'Z')
			{
				ft_putchar(str[i] - 13);
			}
			else
				ft_putchar(str[i]);
			i++;
		}
	}
	else
	{
		ft_putchar('\n');
		return 0;
	}
	ft_putchar('\n');
	return 0;
}

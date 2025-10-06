/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md_2_rotone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 20:44:13 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/06 20:46:53 by said-boutayeb    ###   ########.fr       */
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
			if (str[i] >= 'a' && str[i] <= 'y')
			{
				ft_putchar(str[i] + 1);
			}
			else if (str[i] == 'z')
			{
				ft_putchar('a');
			}
			else if (str[i] >= 'A' && str[i] <= 'Y')
			{
				ft_putchar(str[i] + 1);
			}
			else if (str[i] == 'Z')
			{
				ft_putchar('A');
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 19:50:59 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/08 20:32:49 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int	main(int ac, char *av[])
{
	int	i;
	char	*str;

	if (ac == 2)
	{
		i = 0;
		str = av[1];
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				ft_putchar(str[i] - ('a' - 'A'));
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				ft_putchar(str[i] + ('a' - 'A'));
			}
			else {
				ft_putchar(str[i]);
			}
			i++;
		}
	}
	ft_putchar('\n');
	return 0;
}

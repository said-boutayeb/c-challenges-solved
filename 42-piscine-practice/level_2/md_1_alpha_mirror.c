/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md_1_alpha_mirror.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 20:38:20 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/09 22:37:29 by said-boutayeb    ###   ########.fr       */
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
	int	indexOriginal;
	int	indexEncrypted;
	char	*str;

	if (ac != 2)
	{
		ft_putchar('\n');
		return 0;
	}
	i = 0;
	str = av[1];
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			indexOriginal = str[i] - 'A';
			indexEncrypted = ((26 - 1) - indexOriginal);
			ft_putchar(indexEncrypted + 'A');
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			indexOriginal = str[i] - 'a';
			indexEncrypted = ((26 - 1) - indexOriginal);
			ft_putchar(indexEncrypted + 'a');
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md_3_rotone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 20:48:08 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/06 21:35:26 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void    ft_rotone_char(char c)
{
	int			i;
	static const char	*alphabet	= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	static const char	*rotone_alpha	= "bcdefghijklmnopqrstuvwxyzaBCDEFGHIJKLMNOPQRSTUVWXYZA";
	
	i = 0;
	while (alphabet[i] && alphabet[i] != c)
		i++;
	if (alphabet[i] == c)
		ft_putchar(rotone_alpha[i]);
	else
		ft_putchar(c);
}

int	main (int ac, char *av[])
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			ft_rotone_char(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}

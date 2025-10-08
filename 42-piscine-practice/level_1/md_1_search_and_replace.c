/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md_1_search_and_replace.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:25:10 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/08 20:44:11 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}
void	ft_search_and_replace(char *str, char *c1, char *c2)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c1[0])
		{
			ft_putchar(c2[0]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return ;
}

int	main (int ac, char *av[])
{
	int	i;
	int	j;

	if (ac != 4)
	{
		ft_putchar('\n');
		return 0;
	}
	i = 0;
	while (av[2][i])
		i++;
	j = 0;
	while (av[3][j])
		j++;
	if (i == 1 && j == 1)
	{
		ft_search_and_replace(av[1], av[2], av[3]);
	}
	else
		ft_putchar('\n');
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md_1_repeat_alpha.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 20:44:20 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/04 18:23:30 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ; 
}

int	ft_search_index(char c)
{
	int	i;
	char	alp_u;
	char	alp_l;

	alp_l = 'a';
	alp_u = 'A';
	i = 1;
	while (alp_l != c && alp_u != c)
	{
		alp_l = alp_l + 1;
		alp_u = alp_u + 1;
		i++;
	}
	return (i);
}

void	ft_repeat_alpha(char c)
{
	int	i;
	int	nb;

	nb = 1;
	i = ft_search_index(c);
	while (nb <= i)
	{
		ft_putchar(c);
		nb++;
	}
	return ;
}

int	main(int ac, char **av)
{
	int	i;
	char	*str;

	if (ac != 2)
	{
		ft_putchar('\n');
		return 0;
	}
	str = av[1];
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') 
		 || (str[i] >= 'A' && str[i] <= 'Z'))
			ft_repeat_alpha(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return 0;
}

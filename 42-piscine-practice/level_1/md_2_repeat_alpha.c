/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md_2_repeat_alpha.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 18:25:39 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/04 18:42:07 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ; 
}

void	ft_repeat_alpha(char c)
{
	int	count;
	int	nb;

	nb = 1;
	if (c >= 'a' && c <= 'z')
		count = c - 'a' + 1;
	else 
		count = c - 'A' + 1;
	while (nb <= count)
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

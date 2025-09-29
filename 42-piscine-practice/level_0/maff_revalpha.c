/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:59:08 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/09/25 18:22:48 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	c;
	int	i;

	c = 'z';
	i = 1;
	while (c >= 'a')
	{
		if (i % 2 == 0)
			ft_putchar(c - 32);
		else
			ft_putchar(c);
		i++;
		c--;
	}
	if ((c + 1) == 'a')
		ft_putchar('\n');
	return (0); 
}

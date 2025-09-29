/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 18:25:35 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/09/25 18:34:33 by said-boutayeb    ###   ########.fr       */
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

	c = 'a';
	while (c <= 'z')
	{
		if (c % 2 == 0)
			ft_putchar(c - 32);
		else
			ft_putchar(c);
		c++;
	}
	if ((c - 1) == 'z')
		ft_putchar('\n');
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md_1_rev_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 20:41:19 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/04 21:24:32 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int ac, char *av[])
{
	char	*str;
	int	len;

	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	str = av[1];
	len = ft_strlen(str) - 1;
	while (len >= 0)
	{
		ft_putchar(str[len]);
		len--;
	}
	ft_putchar('\n');
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md_2_rev_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 21:20:29 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/04 21:21:14 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int ac, char *av[])
{
	char	*str;
	int	len;

	if (ac == 2)
	{
		
		str = av[1];
		len = 0;
		while (str[len])
			len++;
		len -= 1;
		while (len >= 0)
			write(1, &str[len--], 1);
	}
	write (1, "\n", 1);
	return (0);
}

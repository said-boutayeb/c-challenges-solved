/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   by: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   created: 2025/10/13 19:50:57 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/25 09:09:02 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

size_t	ft_strchr(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t  ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
	
		if (ft_strchr(accept, s[i]) == 1)
			i++;
		else
			return (i);
	}
	return (i);
}
/*
int	main(int ac, char *av[])
{
	if (ac != 3)
		return (1);
	printf("number is: %zu\n", ft_strspn(av[1], av[2]));
}
*/

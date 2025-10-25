/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:09:54 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/13 19:08:34 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char    *ft_strrev(char *str)
{
	int	f;
	int	l;
	char	temp;
	if (str == NULL)
		return (str);
	l = 0;
	while (str[l])
		l++;
	l--;
	f = 0;
	while (l >= f)
	{
		temp = str[f];
		str[f] = str[l];
		str[l] = temp;
		l--;
		f++;
	}
	return (str);
}
/*
int	main(int ac, char *av[])
{
	char	*str;

	if (ac != 2)
	{
		printf("please enter 1 string you whant revarse!\n");
		return (1);
	}
	printf("Before revarse: %s\n", av[1]);
	str = ft_strrev(av[1]);
	printf("After revarse: %s\n", str);
}
*/

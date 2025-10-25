/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:11:32 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/13 16:46:36 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int	i;
	char	*newstr;

	if (src == NULL)
		return (NULL);
	i = 0;
	while (src[i])
		i++;
	newstr = (char *)malloc((i + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		newstr[i] = src[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		printf("please enter just 1 string:\n");
		return (1);
	}
	printf("this is original string: %s\n", av[1]);
	printf("this is new string: %s\n", ft_strdup(av[1]));
}
*/

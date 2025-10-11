/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md_1_do_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:22:37 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/10 19:46:45 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	int	do1;
	int	do2;
	int	result;
	char	op;
	
	if (ac != 4)
	{
		printf("\n");
		return (0);
	}
	do1 = atoi(av[1]);
	do2 = atoi(av[3]);
	op = av[2][0];
	if (op == '*')
		result = do1 * do2;
	else if (op == '/')
		result = do1 / do2;
	else if (op == '%')
		result = do1 % do2;
	else if (op == '+')
		result = do1 + do2;
	else if (op == '-')
		result = do1 - do2;
	printf("%i\n", result);
	return 0;
}

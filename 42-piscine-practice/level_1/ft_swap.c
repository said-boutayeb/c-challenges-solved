/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 20:03:56 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/02 20:43:33 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	if (a == NULL || b == NULL)
		return ; 
	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a,b;
	a = 11;
	b = 22;
	printf("first a: %i\n", a);
	printf("first b: %i\n", b);
	ft_swap(&a, &b);
	printf("new a: %i\n", a);
	printf("new b: %i\n", b);
}
*/

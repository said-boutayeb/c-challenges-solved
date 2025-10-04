/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: said-boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:05:09 by said-boutayeb     #+#    #+#             */
/*   Updated: 2025/10/01 18:40:40 by said-boutayeb    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *restrict dst, const char *restrict src)
{
	char	*bidst;

	if (dst == src)
		return dst;
	bidst = dst;
	while (*src)
	{
		*dst = *src;
		src++;
		dst++;
	}
	*dst = '\0';
	return (bidst);
}
/*
int	main(void)
{
	char	src[] = "boutayeb";
	char	dest[50] = "said";
	
	printf("this is old dest: %s\n", dest);
	ft_strcpy(dest, src);
	printf("this is new dest: %s\n", dest);
}
*/

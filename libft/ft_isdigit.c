/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:07:55 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/19 21:31:16 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main (void)
{
	char test1 = '0';
	char test2 = '5';
	char test3 = 'd';
	printf("Is it a digit?: %i\n", ft_isdigit(test1));
	printf("Is it a digit?: %i\n", ft_isdigit(test2));
	printf("Is it a digit?: %i\n", ft_isdigit(test3));
	return(0);
}*/